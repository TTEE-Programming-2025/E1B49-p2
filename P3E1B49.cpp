#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<conio.h>

#define SIZE 9
#define SPACE 10
//Function:Show seat chart
void showseats(char saets[SIZE][SIZE])
{
	printf("\\123456789\n");
	
	for(int i=0;i<SIZE;i++)
	{
		printf("%d",9-i);
		for(int j=0;j<SIZE;j++)
		{
			printf("%c",saets[i][j]);
		}
		printf("\n");
	}
}

// Function:Randomly mark 10 preset seats with '*'
void preset(char seats[SIZE][SIZE])
{
	int count=0;
	
	while(count<SPACE)
	{
		int row=rand()%SIZE;
		int col=rand()%SIZE;
		
		if(seats[row][col]!='*')
		{
			seats[row][col]='*';
			count++;
		}
	}
}
int main() {
	char seats[SIZE][SIZE];  
    for(int i=0;i<SIZE;i++)
    {
    	for(int j=0;j<SIZE;j++)
    	{
    		seats[i][j]='-';
		}
    }
    preset(seats);
	srand(time(NULL)); //Initialize random seed 
    //Step 1: Welcome screen and password
    printf("\n");
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (.<  U >.)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  �w   �� |          |\n");
    printf("|   |  ��   �{ |          |\n");
    printf("|   ============          |\n");
printf("                           \n");   
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (*>  u <*)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  �п�J  |          |\n");
    printf("|   |  �K  �X  |          |\n");
    printf("|   ============          |\n");
    printf("                           \n"); 
    printf("---------------------------\n");
    
int mima,i=0;
while(1)
{
i++;
scanf("%d",&mima);
if(mima!=2025){printf("��J���~,�Э��s��J\n");}
else
break;
if(i==3){
printf("���~�T��");
return 0;
}
}

//Step 2:Main Menu
system("CLS");
fflush(stdin);
while(1)
{
printf("------------[Booking System]------------\n");
printf("|    a.Available saets                 |\n"); 
printf("|    b.Arrange for you                 |\n"); 
printf("|    c.Choose by yourself              |\n"); 
printf("|    d.Exit                            |\n"); 
printf("----------------------------------------\n");

char choose;
scanf(" %c",&choose);
system("CLS");
fflush(stdin);


//Step 3 Enter 'a' to display the seat chart(9x9)
if(choose=='a')
{
	showseats(seats);  //Randomly generate 10 pre-booked seats,marked with '*'
	
	//Press any key to clear the screen and return to the main menu 
	printf("�Ы����N���^�D���");
	getch();  //Wait any key
	system("CLS"); 
	fflush(stdin);
}
}
return 0;
}
