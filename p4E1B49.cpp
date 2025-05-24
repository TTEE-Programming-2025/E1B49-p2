#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // 提供 getch() 使用
#include<string.h>  // 提供 strcmp() 比對字串使用

// 宣告學生人數變數
int n;

// 定義學生結構
struct student {
	char name[20]; // 姓名
	int ID;        // 學號
	int sm;        // 數學成績
	int sp;        // 物理成績
	int se;        // 英文成績
}students[10];     // 陣列最多存放 10 位學生

// 函式 a：輸入學生資料
void a(void)
{
	// 中文數字提示用陣列
	char *arr[]={"一","二","三","四","五","六","七","八","九","十"};

	// 輸入學生人數並驗證範圍
	printf("請輸入正整數(5~10):");
	scanf("%d",&n);
	while(n<5||n>10)
	{
		printf("請重新輸入");
		scanf("%d",&n);
	} 

	// 逐一輸入每位學生資料
	for(int i=0;i<n;i++)
	{
		printf("輸入第%s位\n",arr[i]);

		// 輸入姓名
		printf("請輸入名字:");
		scanf("%s",students[i].name);
		
		// 輸入並驗證學號
		printf("請輸入學號(6位數):");
		while(1){
			scanf("%d",&students[i].ID);
			if(students[i].ID>=100000&&students[i].ID<=999999)
			{
				break;
			}  
			printf("請重新輸入");
		};

		// 數學成績輸入與驗證
		printf("請輸入數學成績(0~100):");
		while(1){
			scanf("%d",&students[i].sm);	
			if(students[i].sm>=0&&students[i].sm<=100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 物理成績輸入與驗證
		printf("請輸入物理成績(0~100):");
		while(1){
			scanf("%d",&students[i].sp);
			if(students[i].sp>=0&&students[i].sp<=100)
			{
				break;
			}
			printf("請重新輸入");
		};

		// 英文成績輸入與驗證
		printf("請輸入英文成績(0~100):");
		while(1){
			scanf("%d",&students[i].se);
			if(students[i].se>=0&&students[i].se<=100)
			{
				break;
			}
			printf("請重新輸入");
		};
	}
	// 清除畫面與清除輸入緩衝
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
	getch();            // 等待使用者按鍵後繼續
	system("CLS");      // 清除畫面
	fflush(stdin); 
}

// 函式 c：依姓名查詢單一學生資料
void c(void)
{
	char inputname[10];  // 用來存放查詢用的姓名
	printf("請輸入使用者姓名\n");
	scanf("%s",inputname);

	// 比對所有學生姓名
	for(int i=0;i<n;i++)
	{
		if(strcmp(inputname,students[i].name)==0)
		{
			// 顯示該學生成績與平均
			printf("姓名:%4s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d 平均成績:%.1f\n",
			       students[i].name, students[i].ID,
			       students[i].sm, students[i].sp, students[i].se,
			       (students[i].sm+students[i].sp+students[i].se)/3.0);
		}
		// 若是最後一筆仍沒找到，顯示查無資料（注意：這段會執行多次）
		if(i==(n-1))printf("資料訊息不存在");
	}
	getch();            // 等待按鍵
	system("CLS");      // 清除畫面
	fflush(stdin); 
}

// 函式 d：排名功能尚未實作
void d(void)
{
	
}

// 函式 e：離開功能尚未實作
void e(void)
{
	
}

// 主程式入口
int main()
{
	// 歡迎畫面（ASCII 藝術字）
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

	// 密碼輸入最多三次
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;   // 若正確則跳出
        printf("輸入錯誤,請重新輸入\n");
        if (i == 3) return 0;      // 錯三次則結束程式
    }

    system("CLS");
    fflush(stdin); 
	
	// 主功能選單循環
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
		scanf(" %c",&input);     // 讀入單一選項（空格避免讀取換行）

		system("CLS");
		fflush(stdin); 

		// 根據選項呼叫對應函式
		if(input=='a')
		{
			printf("(a)\n"); 
			a();	// 輸入資料
		}
		if(input=='b')
		{
			printf("(b)\n");
			b();    // 顯示資料
		} 
		if(input=='c')
		{
			printf("(c)");
			c();    // 查詢學生
		} 
		if(input=='d')
		{
			printf("(d)");
			d();    // 排名（尚未實作）
		} 
		if(input=='e')
		{
			printf("(e)");
			e();    // 離開（尚未實作）
		} 
	}
	return 0;
}



