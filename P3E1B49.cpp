#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#include<conio.h>

#define SIZE 9
#define SPACE 10
int main() {
	char seats[SIZE][SIZE];  
    for(int i=0;i<SIZE;i++)
    {
    	for(int j=0;j<SIZE;j++)
    	{
    		seats[i][j]='-';
		}
    }

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
}
return 0;
}
