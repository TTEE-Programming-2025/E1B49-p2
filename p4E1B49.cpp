#include<stdio.h>
#include<stdlib.h>

// 宣告全域變數 n：學生人數
int n;

// 定義學生結構：包含姓名、學號、三科成績
struct student {
	char name[20]; // 姓名
	int ID;        // 學號
	int sm;        // 數學
	int sp;        // 物理
	int se;        // 英文
} students[10];    // 最多10位學生

// 函式 a：輸入學生資料
void a(void)
{
	// 中文數字陣列，用於提示第幾位學生
	char *arr[]={"一","二","三","四","五","六","七","八","九","十"};

	// 提示輸入人數
	printf("請輸入正整數(5~10):");
	scanf("%d",&n);

	// 驗證輸入範圍是否合法
	while(n<5||n>10)
	{
		printf("請重新輸入");
		scanf("%d",&n);
	} 
	
	// 輸入每位學生的資料
	for(int i=0;i<n;i++)
	{
		printf("輸入第%s位\n",arr[i]);

		// 輸入姓名
		printf("請輸入名字:");
		scanf("%s",students[i].name);

		// 輸入學號並驗證為6位數
		printf("請輸入學號(6位數):");
		while(1){
			scanf("%d",&students[i].ID);
			if(students[i].ID>=100000 && students[i].ID<=999999)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 輸入數學成績並驗證範圍
		printf("請輸入數學成績(0~100):");
		while(1){
			scanf("%d",&students[i].sm);
			if(students[i].sm>=0 && students[i].sm<=100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 輸入物理成績
		printf("請輸入物理成績(0~100):");
		while(1){
			scanf("%d",&students[i].sp);
			if(students[i].sp>=0 && students[i].sp<=100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 輸入英文成績
		printf("請輸入英文成績(0~100):");
		while(1){
			scanf("%d",&students[i].se);
			if(students[i].se>=0 && students[i].se<=100)
			{
				break;
			}
			printf("請重新輸入");
		};
	}

	// 清除畫面與輸入緩衝區
	system("CLS");
	fflush(stdin); 	
}

// 函式 b：顯示所有學生資料
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("姓名:%4s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d\n",
			students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
}

// 函式 c：查詢功能（尚未實作）
void c(void)
{
	
}

// 函式 d：成績排序功能（尚未實作）
void d(void)
{
	
}

// 函式 e：離開系統（尚未實作）
void e(void)
{
	
}

int main()
{
	// 歡迎畫面 (ASCII 藝術風格)
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

	// 密碼驗證機制，最多三次機會
	int mima, i = 0;
	while (1){
		i++;
		scanf("%d", &mima);
		if (mima == 2025) break;   // 密碼正確跳出
		printf("輸入錯誤,請重新輸入\n");
		if (i == 3) return 0;      // 錯三次結束程式
	}

	system("CLS");
	fflush(stdin); 
	
	// 主功能選單迴圈
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
		scanf(" %c", &input);  // 接收單一字元（前空格避免讀入換行符）

		system("CLS");
		fflush(stdin); 

		// 根據輸入執行對應功能
		if(input=='a')
		{
			printf("(a)\n"); 
			a();	// 呼叫輸入資料副程式
		}

		if(input=='b')
		{
			printf("(b)\n");
			b();    // 呼叫顯示資料副程式
		} 

		if(input=='c')
		{
			printf("(c)");
			c();    // 呼叫查詢資料副程式（尚未實作）
		} 

		if(input=='d')
		{
			printf("(d)");
			d();    // 呼叫排序資料副程式（尚未實作）
		} 

		if(input=='e')
		{
			printf("(e)");
			e();    // 呼叫離開系統副程式（尚未實作）
		} 
	}

	return 0;
}


