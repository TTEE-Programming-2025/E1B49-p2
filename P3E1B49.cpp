#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <conio.h>

#define SIZE 9
#define SPACE 10

// Function: Show seat chart
void showseats(char saets[SIZE][SIZE])
{
	printf("\\123456789\n");
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", 9 - i);
		for (int j = 0; j < SIZE; j++)
		{
			printf("%c", saets[i][j]);
		}
		printf("\n");
	}
}

// Function: Randomly mark 10 preset seats with '*'
void preset(char seats[SIZE][SIZE])
{
	int count = 0;
	while (count < SPACE)
	{
		int row = rand() % SIZE;
		int col = rand() % SIZE;
		if (seats[row][col] != '*')
		{
			seats[row][col] = '*';
			count++;
		}
	}
}    

// Function: Find consecutive seats in a row
int autochoose3(char seats[SIZE][SIZE], int need) 
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j <= SIZE - need; j++)
		{
			int found = 1;
			for (int k = 0; k < need; k++)
			{
				if (seats[i][j + k] != '-')
				{
					found = 0;
					break;
				}
			}
			if (found)
			{
				for (int k = 0; k < need; k++)
				{
					seats[i][j + k] = '@';
				}
				return 1;
			}
		}
	}
	return 0;
}

// Function: Find two rows with 2 seats each
int autochoose4(char seats[SIZE][SIZE])
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j <= SIZE - 2; j++)
		{
			if (seats[i][j] == '-' && seats[i][j + 1] == '-' &&
				seats[i + 1][j] == '-' && seats[i + 1][j + 1] == '-')
			{
				seats[i][j] = seats[i][j + 1] = '@';
				seats[i + 1][j] = seats[i + 1][j + 1] = '@';
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	char seats[SIZE][SIZE];  
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            seats[i][j] = '-';
    
    preset(seats);
	srand(time(NULL)); // Initialize random seed 

    // Step 1: Welcome screen and password
    printf("\n");
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (.<  U >.)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |   WELCOME   |       |\n");
    printf("|   |    TO US    |       |\n");
    printf("|   ============          |\n");
    printf("                           \n");   
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (*>  u <*)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  Please enter |     |\n");
    printf("|   |  the password |     |\n");
    printf("|   ============          |\n");
    printf("                           \n"); 
    printf("---------------------------\n");

    int mima, i = 0;
    while (1) {
        i++;
        scanf("%d", &mima);
        if (mima != 2025) {
            printf("Wrong password, please try again.\n");
        } else break;
        if (i == 3) {
            printf("Too many failed attempts. Access denied.\n");
            return 0;
        }
    }

    // Step 2: Main Menu
    system("CLS");
    fflush(stdin);
    while (1) {
        printf("------------[Booking System]------------\n");
        printf("|    a. Show available seats           |\n"); 
        printf("|    b. Auto arrange seats             |\n"); 
        printf("|    c. Choose seats manually          |\n"); 
        printf("|    d. Exit                           |\n"); 
        printf("----------------------------------------\n");

        char choose;
        scanf(" %c", &choose);
        system("CLS");
        fflush(stdin); 

        // Step 3: Show seat chart
        if (choose == 'a') {
            showseats(seats);
            printf("Press any key to return to main menu...");
            getch();
            system("CLS");
            fflush(stdin);
        }

        // Step 4: Auto arrange seats
        if (choose == 'b') {
            int need = 0;
            printf("How many seats do you need? (1~4): ");
            scanf(" %d", &need);
            int success = 0;

            if (need <= 3) {
                success = autochoose3(seats, need);
            } else if (need == 4) {
                success = autochoose3(seats, 4);
                if (!success) {
                    success = autochoose4(seats);
                }
            }

            if (!success) {
                printf("No suitable seats found. Press any key to return.\n");
                getch();
                system("CLS");
                fflush(stdin);
                continue;
            }

            showseats(seats);
            printf("Accept suggested seats? (y/n): ");
            char ans;
            while (getchar() != '\n');
            scanf("%c", &ans);

            if (ans == 'y' || ans == 'Y') {
                for (int i = 0; i < SIZE; i++)
                    for (int j = 0; j < SIZE; j++)
                        if (seats[i][j] == '@')
                            seats[i][j] = '*';
            } else {
                for (int i = 0; i < SIZE; i++)
                    for (int j = 0; j < SIZE; j++)
                        if (seats[i][j] == '@')
                            seats[i][j] = '-';
            }

            system("CLS");
        }

        // Step 5: Manual seat selection
        if (choose == 'c') {
            int num;
            char temp[10];
            int row, col;
            int valid = 1;

            printf("How many seats do you want to reserve?: ");
            scanf(" %d", &num);
            fflush(stdin);

            for (int n = 0; n < num; n++) {
                printf("Enter seat %d (format: row-column, e.g. 1-2): ", n + 1);
                fgets(temp, sizeof(temp), stdin);

                if (sscanf(temp, "%d-%d", &row, &col) != 2 || row < 1 || row > 9 || col < 1 || col > 9) {
                    printf("Invalid format or out of range. Please try again.\n");
                    n--;
                    continue;
                }

                row = 9 - row;
                col = col - 1;

                if (seats[row][col] != '-') {
                    printf("Seat already taken. Please re-enter.\n");
                    n--;
                    continue;
                }

                seats[row][col] = '@';
            }

            showseats(seats);
            printf("If the above selection is correct, press any key to confirm...\n");
            getch();

            for (int i = 0; i < SIZE; i++)
                for (int j = 0; j < SIZE; j++)
                    if (seats[i][j] == '@')
                        seats[i][j] = '*';

            system("CLS");
        }

        // Step 6: Exit and ask to re-enter
        if (choose == 'd') {
            printf("Do you want to restart? (y/n):\n");
            while (1) {
                char tof;
                scanf(" %c", &tof);
                if (tof == 'Y' || tof == 'y') {
                    system("CLS");
                    break;
                } else if (tof == 'N' || tof == 'n') {
                    return 0;
                } else {
                    printf("Invalid input, please try again.\n");
                }
            }
        }
    }

    return 0;
}


//Reflection: The difficulty of this programming 
//assignment increased drastically. Compared to the 
//previous ones, the difference in difficulty was 
//like night and day. However, I was able to complete 
//it by researching and paying close attention in class. 
//At first, I thought the random seat selection part 
//would be very hard, but after looking into it, 
//I realized the logic was actually quite straightforward. 
