#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // �Ω� getch()
#include<string.h>  // �Ω� strcmp()

// �����ܼ� n�G�ǥͤH��
int n;

// �w�q�ǥ͵��c
struct student {
	char name[20];      // �m�W
	int ID, sm, sp, se; // �Ǹ��B�ƾǡB���z�B�^�妨�Z
	float avg;          // �������Z
} students[10];        // �̦h�x�s 10 ��ǥ�

// �禡 a�G��J�ǥ͸��
void a(void)
{
	char *arr[] = {"�@","�G","�T","�|","��","��","�C","�K","�E","�Q"};
	printf("�п�J�����(5~10):");
	scanf("%d",&n);

	// �ˬd��J�H�ƽd��]��X�� <0�A�޿�W���� <5�A�����B�̧A���ܤ��ק�^
	while(n<0||n>10)
	{
		printf("�Э��s��J");
		scanf("%d",&n);
	} 
	
	// �̧ǿ�J�ǥ͸��
	for(int i=0;i<n;i++)
	{
		printf("��J��%s��\n", arr[i]);

		printf("�п�J�W�r:");
		scanf("%s", students[i].name);
		
		printf("�п�J�Ǹ�(6���):");
		while(1){
			scanf("%d", &students[i].ID);
			if(students[i].ID >= 100000 && students[i].ID <= 999999) break;
			printf("�Э��s��J");
		};

		printf("�п�J�ƾǦ��Z(0~100):");
		while(1){
			scanf("%d", &students[i].sm);
			if(students[i].sm >= 0 && students[i].sm <= 100) break;
			printf("�Э��s��J");
		};

		printf("�п�J���z���Z(0~100):");
		while(1){
			scanf("%d", &students[i].sp);
			if(students[i].sp >= 0 && students[i].sp <= 100) break;
			printf("�Э��s��J");
		};

		printf("�п�J�^�妨�Z(0~100):");
		while(1){
			scanf("%d", &students[i].se);
			if(students[i].se >= 0 && students[i].se <= 100) break;
			printf("�Э��s��J");
		};
	}
	system("CLS");    // �M���e��
	fflush(stdin);    // �M����J�w��
}

// �禡 b�G��ܩҦ��ǥ͸��
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("�m�W:%4s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d\n",
			students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
	getch();          // ���ݫ���
	system("CLS");
	fflush(stdin); 
}

// �禡 c�G�d�߾ǥ͸�ơ]�H�m�W�j�M�^
void c(void)
{
	char inputname[10];
	printf("�п�J�ϥΪ̩m�W\n");
	scanf("%s", inputname);

	for(int i=0;i<n;i++)
	{
		// �Y��J�m�W�P�ǥͬ۲šA��X�ԲӸ��
		if(strcmp(inputname, students[i].name) == 0)
		{
			printf("�m�W:%4s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d �������Z:%.1f\n",
				students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se,
				(students[i].sm + students[i].sp + students[i].se) / 3.0);
			break;
		}
		// �Y�O�̫�@���٨S���A��ܬd�L���
        if(i == (n-1)) printf("��ưT�����s�b");
	}
	getch();          // ���ݿ�J
	system("CLS");
	fflush(stdin); 
}

// �禡 d�G�̥������Z�Ƨǡ]�Ѱ��ܧC�^�����
void d(void)
{
	// �p�⥭�����Z
	for(int i=0;i<n;i++)
	{
		students[i].avg = (students[i].se + students[i].sp + students[i].sm) / 3.0;
	}
	
	// ��w�Ƨǡ]�Ѱ���C�^
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			// �Y�U�@�쥭������ثe�A�洫
			if(students[j].avg < students[j+1].avg)
			{
				student term = students[j];
				students[j] = students[j+1];
				students[j+1] = term;
			}
		}
		// �C���~��Ƨǫ�L�X�@��]�`�N�G�o�˷|�L�h���A��X�p���^
		printf("�m�W:%4s �Ǹ�:%d �������Z:%.2f\n",
		       students[i].name, students[i].ID, students[i].avg);
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// �禡 e�G�h�X�\��]�|����@�^
void e(void)
{
	
}

int main()
{
	// �w��e���]ASCII �r���Ϯס^
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

	// �K�X�̦h��J�T��
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;  // ���T�Y�q�L
        printf("��J���~,�Э��s��J\n");
        if (i == 3) return 0;     // ���~�T���h�����{��
    }

    system("CLS");
    fflush(stdin); 
	
	// �D���j��
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
		scanf(" %c", &input);  // �`�N�Ů�A���L�����

		system("CLS");
		fflush(stdin); 

		// ��������\��
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




