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
if(i==3)return 0;
}
system("CLS");
fflush(stdin);
while(1){
    printf("---------------------------\n");
    printf("|   a.�e�X�����T����      |\n");
    printf("|   b.��ܭ��k��          |\n");
    printf("|   c.����                |\n");
    printf("---------------------------\n");
char ch,ch1;
scanf(" %c",&ch);
if(ch=='a'||ch=='A')
{
    system("CLS");
    printf("�п�J�@��'a'��'n'���r��");
    while(1){
        fflush(stdin);
        scanf(" %c",&ch1);
        if(ch1<'a'||ch1>'n'){
        printf("��J���~,�Э��s��J\n");
        }
    else{
        footform(ch1);
        printf("�Ы����N����^�D���");
        getch();
        system("CLS");
        break;
        }
    }
}

if(ch=='b'||ch=='B'){
 system("CLS");
printf("��J�@��1��9�����");
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
  printf("�Ы����N����^�D���");
        getch();
        system("CLS");
  break;
 }
 else printf("��J���~�Э��s��J");
}
}
}
//�ĥ|��������ϥΪ̿�Jb�]�X�B�ھڨϥΪ̿�J���Ʀr�]�X99���k��
