
#include<stdio.h>
#include<stdlib.h>
int main() {
    printf("\n");
    printf("---------------------------\n");
    printf("|                         |\n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (.<  U >.)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   | 摘一朵花 |          |\n");
    printf("|   | 送給媽媽 |          |\n");
    printf("|   ============          |\n");
    printf("|                         |\n");
    printf("---------------------------\n");
    printf("|                         |\n"); 
    printf("|    /)  @  /)            |\n");
    printf("|   (>  u <)            |\n");
    printf("|   ==U==U======          |\n");
    printf("|   |  按任意  |          |\n");
    printf("|   |  鍵繼續  |          |\n");
    printf("|   ============          |\n");
    printf("|                         |\n"); 
    printf("---------------------------\n");
    system("PAUSE");//螢幕畫面暫停，並等待使用者按任意鍵
    system("CLS");//清除螢幕
    fflush(stdin);//使input buffer淨空
    printf("請輸入密碼");
    int mima;
    scanf("%d",&mima);
    if(mima!=2025){printf("輸入錯誤");return 0; 
    }
    printf("---------------------------\n");
    printf("| 'A'...'Z' : Uppercase   |\n");
    printf("| 'a'...'z' : Lowercase   |\n");
    printf("| '0'...'9' : Digit       |\n");
    printf("| Otherwise : Your name   |\n");
    printf("---------------------------\n");
    printf("請輸入1個字元");
    char ziyuan;
    scanf(" %c",&ziyuan);
    if(ziyuan>='A'&&ziyuan<='Z')printf("Uppercase");
    else if(ziyuan>='a'&&ziyuan<='z')printf("Lowercase");
    else if(ziyuan>='1'&&ziyuan<='9')printf("Digit");
    else printf("E1B49張庭豪");
    system("PAUSE");
    system("CLS");
    fflush(stdin);
    return 0;
}
//心得：很有趣欸哈哈，可以自己設定版面有一種在寫網站的感覺
//，很酷。
