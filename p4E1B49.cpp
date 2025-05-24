#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // 提供 getch() 用來等待使用者按鍵
#include<string.h>  // 提供 strcmp() 用於字串比對

// 宣告學生人數變數
int n;

// 定義學生結構體
struct student {
	char name[20];     // 姓名
	int ID, sm, sp, se;// 學號、數學、物理、英文成績
	float avg;         // 平均成績
}students[10];         // 最多 10 位學生

// a：輸入學生資料
void a(void)
{
	// 中文數字提示陣列
	char *arr[]={"一","二","三","四","五","六","七","八","九","十"};
	printf("請輸入正整數(5~10):");
	scanf("%d",&n);
	
	// 檢查輸入範圍
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
		
		// 輸入並檢查學號
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
	system("CLS");      // 清除畫面
	fflush(stdin);      // 清除輸入緩衝區
}

// b：顯示所有學生資料
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("姓名:%6s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d\n",
		       students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
	getch();           // 等待任意鍵
	system("CLS");     // 清除畫面
	fflush(stdin); 
}

// c：查詢單一學生資料（依姓名）
void c(void)
{
	char inputname[10];
	printf("請輸入使用者姓名\n");
	scanf("%s",inputname);

	for(int i=0;i<n;i++)
	{
		// 如果姓名相符，印出成績與平均
		if(strcmp(inputname,students[i].name)==0)
		{
			printf("姓名:%6s 學號:%d 數學成績:%d 物理成績:%d 英文成績:%d 平均成績:%.1f\n",
			       students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se,
			       (students[i].sm+students[i].sp+students[i].se)/3.0);
			break;
		}
		// 如果已經查詢到最後仍未找到，顯示不存在（放在迴圈內邏輯會有誤，但依原碼保留）
        if(i==(n-1))printf("資料訊息不存在");
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// d：按照平均成績從高到低排序並顯示
void d(void)
{
	// 計算每位學生的平均成績
	for(int i=0;i<n;i++)
	{
		students[i].avg = (students[i].se + students[i].sp + students[i].sm)/3.0;
	}
	
	// 氣泡排序：從高到低排列平均成績
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(students[j].avg < students[j+1].avg)
			{
				student term = students[j];
				students[j] = students[j+1];
				students[j+1] = term;
			}
		}
	}
	
	// 顯示排序結果
	for(int i=0;i<n;i++)
	{
		printf("姓名:%6s 學號:%d 平均成績:%.2f\n",students[i].name,students[i].ID,students[i].avg);
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// e：詢問是否退出程式
int e(void)
{
	char yn;
	while(1)
	{
		printf("確定離開?(y/n)");
		scanf(" %c",&yn);  // 前面空格避免與前一次輸入衝突
		if(yn=='y')
		{
			return 0;     // 回傳 0 代表退出
			break;
		}
		else if(yn=='n') break; // 不退出則跳出詢問
	}
}

// 主程式入口
int main()
{
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

    // 密碼驗證最多三次
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;   // 正確即跳出
        printf("輸入錯誤,請重新輸入\n");
        if (i == 3) return 0;      // 錯三次離開
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
		scanf(" %c", &input);  // 讀取選項（空格避免與之前輸入衝突）

		system("CLS");
		fflush(stdin); 

		// 執行對應功能
		if(input=='a') {
			printf("(a)\n"); 
			a(); 
		}
		if(input=='b') {
			printf("(b)\n");
			b(); 
		}
		if(input=='c') {
			printf("(c)\n");
			c(); 
		}
		if(input=='d') {
			printf("(d)\n");
			d(); 
		}
		if(input=='e') {
			printf("(e)\n");
			if(e() == 0) break;  // 若回傳 0 則結束迴圈
			system("CLS");
			fflush(stdin); 
		}
	}
	return 0;
}

/*
這次製作學生成績系統，讓我更熟悉C語言的結構與邏輯處理，
特別是資料輸入、排序與搜尋功能的實作，有助於提升實務編程能力。
*/

