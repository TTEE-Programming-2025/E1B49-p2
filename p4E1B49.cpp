#include<stdio.h>
#include<stdlib.h>

// 宣告全域變數：學生人數
int n;

// 定義學生結構，包含姓名、學號與三科成績
struct student {
	char name[20]; // 姓名
	int ID;        // 學號
	int sm;        // 數學成績
	int sp;        // 物理成績
	int se;        // 英文成績
} students[10];    // 最多支援10位學生

// 函式 a：輸入學生資料
void a(void)
{
	// 中文數字陣列，用來提示第幾位學生
	char *arr[]={"一","二","三","四","五","六","七","八","九","十"};

	// 輸入學生人數
	printf("請輸入正整數(5~10):");
	scanf("%d", &n);

	// 檢查是否在合法範圍內
	while(n < 5 || n > 10)
	{
		printf("請重新輸入");
		scanf("%d", &n);
	} 
	
	// 輸入每位學生資料
	for(int i = 0; i < n; i++)
	{
		printf("輸入第%s位\n", arr[i]);

		// 輸入姓名
		printf("請輸入名字:");
		scanf("%s", students[i].name);
		
		// 輸入學號，限制為6位數
		printf("請輸入學號(6位數):");
		while(1){
			scanf("%d", &students[i].ID);
			if(students[i].ID >= 100000 && students[i].ID <= 999999)
			{
				break;
			}  
			printf("請重新輸入");
		};

		// 輸入數學成績，範圍0~100
		printf("請輸入數學成績(0~100):");
		while(1){
			scanf("%d", &students[i].sm);	
			if(students[i].sm >= 0 && students[i].sm <= 100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 輸入物理成績
		printf("請輸入物理成績(0~100):");
		while(1){
			scanf("%d", &students[i].sp);
			if(students[i].sp >= 0 && students[i].sp <= 100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 輸入英文成績
		printf("請輸入英文成績(0~100):");
		while(1){
			scanf("%d", &students[i].se);
			if(students[i].se >= 0 && students[i].se <= 100)
			{
				break;
			}
			printf("請重新輸入");
		};
	}

	// 輸入完畢後清除畫面與緩衝區
	system("CLS");
	fflush(stdin); 	
}

// 函式 b：顯示所有學生成績（尚未實作）
void b(void)
{

}

// 函式 c：查詢學生（尚未實作）
void c(void)
{
	
}

// 函式 d：成績排序（尚未實作）
void d(void)
{
	
}

// 函式 e：離開系統（尚未實作）
void e(void)
{
	
}

int main()
{
	// 歡迎畫面，使用 ASCII 藝術字裝飾
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

	// 密碼驗證，最多可輸入三次
	int mima, i = 0;
	while (1){
		i++;
		scanf("%d", &mima);
		if (mima == 2025) break; // 密碼正確跳出
		printf("輸入錯誤,請重新輸入\n");
		if (i == 3) return 0;    // 三次錯誤則結束程式
	}

	system("CLS");
	fflush(stdin); 
	  
	// 主功能選單迴圈
	while (1)
	{
		// 顯示主選單
		printf("--------------------------------------\n");
		printf("|   a.Enter student grades           |\n");
		printf("|   b.Display student grades         |\n");
		printf("|   c.Search for student grades      |\n");
		printf("|   d.Grade ranking                  |\n");
		printf("|   e.Exit system                    |\n");
		printf("--------------------------------------\n");
        
		char input;
		scanf(" %c", &input);  // 讀取選單選項（前有空格可忽略 Enter 鍵干擾）

		system("CLS");         // 清除畫面

		// 判斷輸入並呼叫對應功能
		if(input == 'a')
		{
			printf("(a)");
			a();	// 輸入資料
		}
		if(input == 'b')
		{
			printf("(b)");
			b();    // 顯示成績（未實作）
		} 
		if(input == 'c')
		{
			printf("(c)");
			c();    // 查詢成績（未實作）
		} 
		if(input == 'd')
		{
			printf("(d)");
			d();    // 排名功能（未實作）
		} 
		if(input == 'e')
		{
			printf("(e)");
			e();    // 離開系統（未實作）
		} 
	}
	return 0;
}

