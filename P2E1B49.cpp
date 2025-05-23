#include<stdio.h>   // 標準輸入輸出
#include<stdlib.h>  // system("CLS")等用到
#include<conio.h>   // getch()用到

// 畫出倒直角三角形
void footform(char ch){
    int k = ch - 'a' + 1;
    for (char i = ch; i >= 'a'; i--){
        for (int space = 0; space < k - (ch - i); space++){
            printf(" ");
        }
        for (char j = i; j <= ch; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}

int main() {
    // 歡迎畫面
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

    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;   // 密碼正確，跳出
        printf("輸入錯誤,請重新輸入\n");
        if (i == 3) return 0;      // 錯三次直接結束
    }

    system("CLS");
    fflush(stdin);

    while (1){
        // 主選單
        printf("---------------------------\n");
        printf("|   a.畫出直角三角形      |\n");
        printf("|   b.顯示乘法表          |\n");
        printf("|   c.結束                |\n");
        printf("---------------------------\n");

        char ch, ch1;
        scanf(" %c", &ch);

        if (ch == 'a' || ch == 'A'){
            system("CLS");
            printf("請輸入一個'a'到'n'的字元\n");
            while (1){
                fflush(stdin);
                scanf(" %c", &ch1);
                if (ch1 >= 'a' && ch1 <= 'n'){
                    footform(ch1); // 呼叫畫三角形
                    printf("請按任意鍵返回主選單");
                    getch();
                    system("CLS");
                    break;
                }
                printf("輸入錯誤,請重新輸入\n");
            }
        }
        else if (ch == 'b' || ch == 'B'){
            system("CLS");
            printf("輸入一個1至9的整數\n");
            while (1){
                int num;
                scanf("%d", &num);
                if (num > 0 && num < 10){
                    for (int k = 1; k <= num; k++){
                        for (int l = 1; l <= num; l++){
                            printf("%d*%d=%2d ", k, l, k*l);
                        }
                        printf("\n");
                    }
                    printf("請按任意鍵返回主選單");
                    getch();
                    system("CLS");
                    break;
                }
                printf("輸入錯誤請重新輸入\n");
            }
        }
        else if (ch == 'c' || ch == 'C'){
            system("CLS");
            printf("'Continue?(y/n)' 是否要重新輸入?\n");
            while (1){
                char tof;
                scanf(" %c", &tof);
                if (tof == 'Y' || tof == 'y'){
                    system("CLS"); // 回到主選單
                    break;
                }
                else if (tof == 'N' || tof == 'n'){
                    return 0;     // 結束程式
                }
                printf("輸入錯誤請重新輸入\n");
            }
        }
        else {
            printf("輸入錯誤,請重新選擇\n");
        }
    }
}
