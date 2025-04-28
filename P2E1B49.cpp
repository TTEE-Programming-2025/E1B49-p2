#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void footform(char ch){
    int k=ch-'a'+1; 
    for(char i=ch;i>='a';i--){
        for(int space=0;space<k-(ch-i);space++){
            printf(" ");
        }
        for(char j=i;j<=ch;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}

int main() {
    printf("\n");
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (.<  U >.)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  歡   迎 |          |\n");
    printf("|   |  光   臨 |          |\n");
    printf("|   ============          |\n");
printf("                           \n");   
    printf("---------------------------\n");
    printf("                           \n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (*>  u <*)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  請輸入  |          |\n");
    printf("|   |  密  碼  |          |\n");
    printf("|   ============          |\n");
    printf("                           \n"); 
    printf("---------------------------\n");
int mima,i=0;
while(1)
{
i++;
scanf("%d",&mima);
if(mima!=2025){printf("輸入錯誤,請重新輸入\n");}
else
break;
if(i==3)return 0;
}
system("CLS");
fflush(stdin);
//第二次讓使用者輸入密碼
