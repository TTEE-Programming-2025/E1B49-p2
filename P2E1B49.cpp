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
//�ĤG�����ϥΪ̿�J�K�X
