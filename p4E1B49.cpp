#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // 用於 getch()
#include<string.h>  // 用於 strcmp()

// 全域變數 n：學生人數
int n;

// 定義學生結構
struct student {
	char name[20];      // 姓名
	int ID, sm, sp, se; // 學號、數學、物理、英文成績
	float avg;          // 平均成績
} students[10];        // 最多儲存 10 位學生

// 函式 a：輸入學生資料
void a(void)
{
	char *arr[] = {"一","二","三","四","五","六","七","八","九","十"};
	printf("請輸入正整數(5~10):");
	scanf("%d",&n);

	// 檢查輸入人數範圍（原碼為 <0，邏輯上應為 <5，但此處依你指示不修改）
	while(n<0||n>10)
	{
		printf("請重新輸入");
		scanf("%d",&n);
	} 
	
	// 依序輸入學生資料
	for(int i=0;i<n;i++)
	{
		printf("輸入第%s位\n", arr[i]);

		printf("請輸入名字:");
		scanf("%s", students[i].name);
		
		printf("請輸入學號(6位數):");
		while(1){
			scanf("%d", &students[i].ID);
			if(students[i].ID >= 100000 && students[i].ID <= 999999) break;
			printf("請重新輸入");
		};

		printf("請輸入數學成績(0~100):");
		while(1){
			scanf("%d", &students[i].sm);
			if(students[i].sm >= 0 && students[i].sm <= 100) break;
			printf("請重新輸入");
		};

		printf("請輸入物理成績(0~100):");
		while(1){
			scanf("%d", &students[i].sp);
			if(students[i].sp >= 0 && students[i].sp <= 100) break;
			printf("請重新輸入");
		};

		printf("請輸入英文成績(0~100):");
		while(1){
			scanf("%d", &students[i].se);
			if(students[i].se >= 0 && students[i].se <= 100) break;
			printf("請重新輸入");
		};
	}
	system("CLS");    // 清除畫面
	fflush(stdin);    // 清除輸入緩衝
}

// 函式 b：顯示所有學生資料
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("姓名:%4s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d\n",
			students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
	getch();          // 等待按鍵
	system("CLS");
	fflush(stdin); 
}

// 函式 c：查詢學生資料（以姓名搜尋）
void c(void)
{
	char inputname[10];
	printf("請輸入使用者姓名\n");
	scanf("%s", inputname);

	for(int i=0;i<n;i++)
	{
		// 若輸入姓名與學生相符，輸出詳細資料
		if(strcmp(inputname, students[i].name) == 0)
		{
			printf("姓名:%4s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d 平均成績:%.1f\n",
				students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se,
				(students[i].sm + students[i].sp + students[i].se) / 3.0);
			break;
		}
		// 若是最後一筆還沒找到，顯示查無資料
        if(i == (n-1)) printf("資料訊息不存在");
	}
	getch();          // 等待輸入
	system("CLS");
	fflush(stdin); 
}

// 函式 d：依平均成績排序（由高至低）並顯示
void d(void)
{
	// 計算平均成績
	for(int i=0;i<n;i++)
	{
		students[i].avg = (students[i].se + students[i].sp + students[i].sm) / 3.0;
	}
	
	// 氣泡排序（由高到低）
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			// 若下一位平均高於目前，交換
			if(students[j].avg < students[j+1].avg)
			{
				student term = students[j];
				students[j] = students[j+1];
				students[j+1] = term;
			}
		}
		// 每次外圈排序後印出一位（注意：這樣會印多次，原碼如此）
		printf("姓名:%4s 學號:%d 平均成績:%.2f\n",
		       students[i].name, students[i].ID, students[i].avg);
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// 函式 e：退出功能（尚未實作）
void e(void)
{
	
}

int main()
{
	// 歡迎畫面（ASCII 字元圖案）
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

	// 密碼最多輸入三次
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;  // 正確即通過
        printf("輸入錯誤,請重新輸入\n");
        if (i == 3) return 0;     // 錯誤三次則結束程式
    }

    system("CLS");
    fflush(stdin); 
	
	// 主選單迴圈
	while (1)
	{
        printf("--------------------------------------\n");
        printf("|   a.Enter student grades           |\n");
        printf("|   b.Display student grades         |\n");
        printf("|   c.Search for student grades      |\n");
        printf("|   d.Grade ranking                  |\n");
        printf("|   e.Exit system                    |\n");
        printf("--------------------------------------\n");

		char input;
		scanf(" %c", &input);  // 注意空格，跳過換行符

		system("CLS");
		fflush(stdin); 

		// 執行對應功能
		if(input == 'a') {
			printf("(a)\n"); 
			a();	
		}
		if(input == 'b') {
			printf("(b)\n");
			b();    
		} 
		if(input == 'c') {
			printf("(c)\n");
			c();    
		} 
		if(input == 'd') {
			printf("(d)\n");
			d();    
		} 
		if(input == 'e') {
			printf("(e)\n");
			e();    
		} 
	}
	return 0;
}




