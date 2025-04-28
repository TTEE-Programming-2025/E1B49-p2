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
while(1){
    printf("---------------------------\n");
    printf("|   a.畫出直角三角形      |\n");
    printf("|   b.顯示乘法表          |\n");
    printf("|   c.結束                |\n");
    printf("---------------------------\n");
char ch,ch1;
scanf(" %c",&ch);
if(ch=='a'||ch=='A')
{
    system("CLS");
    printf("請輸入一個'a'到'n'的字元");
    while(1){
        fflush(stdin);
        scanf(" %c",&ch1);
        if(ch1<'a'||ch1>'n'){
        printf("輸入錯誤,請重新輸入\n");
        }
    else{
        footform(ch1);
        printf("請按任意見返回主選單");
        getch();
        system("CLS");
        break;
        }
    }
}

if(ch=='b'||ch=='B'){
 system("CLS");
printf("輸入一個1至9的整數");
{
 while(1){
 int num;
 scanf(" %d",&num);
 if(num>0&&num<10){
  for(int k=1;k<=num;k++){
   for(int l=1;l<=num;l++){
    printf("%d*%d=%d ",k,l,k*l);
   }
   printf("\n");
  }
  printf("請按任意見返回主選單");
        getch();
        system("CLS");
  break;
 }
 else printf("輸入錯誤請重新輸入");
}
}
}
//第四次完成當使用者輸入b跑出且根據使用者輸入的數字跑出99乘法表
