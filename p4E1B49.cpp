#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // ���� getch() �Ψӵ��ݨϥΪ̫���
#include<string.h>  // ���� strcmp() �Ω�r����

// �ŧi�ǥͤH���ܼ�
int n;

// �w�q�ǥ͵��c��
struct student {
	char name[20];     // �m�W
	int ID, sm, sp, se;// �Ǹ��B�ƾǡB���z�B�^�妨�Z
	float avg;         // �������Z
}students[10];         // �̦h 10 ��ǥ�

// a�G��J�ǥ͸��
void a(void)
{
	// ����Ʀr���ܰ}�C
	char *arr[]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q"};
	printf("�п�J�����(5~10):");
	scanf("%d",&n);
	
	// �ˬd��J�d��
	while(n<5||n>10)
	{
		printf("�Э��s��J");
		scanf("%d",&n);
	} 
	
	// ��J�C��ǥͪ����
	for(int i=0;i<n;i++)
	{
		printf("��J��%s��\n",arr[i]);
		
		// ��J�m�W
		printf("�п�J�W�r:");
		scanf("%s",students[i].name);
		
		// ��J���ˬd�Ǹ�
		printf("�п�J�Ǹ�(6���):");
		while(1){
			scanf("%d",&students[i].ID);
			if(students[i].ID>=100000&&students[i].ID<=999999)
			{
				break;
			}  
			printf("�Э��s��J");
		};
		
		// �ƾǦ��Z��J�P����
		printf("�п�J�ƾǦ��Z(0~100):");
		while(1){
			scanf("%d",&students[i].sm);	
			if(students[i].sm>=0&&students[i].sm<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};
		
		// ���z���Z��J�P����
		printf("�п�J���z���Z(0~100):");
		while(1){
			scanf("%d",&students[i].sp);
			if(students[i].sp>=0&&students[i].sp<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};
		
		// �^�妨�Z��J�P����
		printf("�п�J�^�妨�Z(0~100):");
		while(1){
			scanf("%d",&students[i].se);
			if(students[i].se>=0&&students[i].se<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};
	}
	system("CLS");      // �M���e��
	fflush(stdin);      // �M����J�w�İ�
}

// b�G��ܩҦ��ǥ͸��
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("�m�W:%6s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d\n",
		       students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
	getch();           // ���ݥ��N��
	system("CLS");     // �M���e��
	fflush(stdin); 
}

// c�G�d�߳�@�ǥ͸�ơ]�̩m�W�^
void c(void)
{
	char inputname[10];
	printf("�п�J�ϥΪ̩m�W\n");
	scanf("%s",inputname);

	for(int i=0;i<n;i++)
	{
		// �p�G�m�W�۲šA�L�X���Z�P����
		if(strcmp(inputname,students[i].name)==0)
		{
			printf("�m�W:%6s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d �������Z:%.1f\n",
			       students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se,
			       (students[i].sm+students[i].sp+students[i].se)/3.0);
			break;
		}
		// �p�G�w�g�d�ߨ�̫ᤴ�����A��ܤ��s�b�]��b�j�餺�޿�|���~�A���̭�X�O�d�^
        if(i==(n-1))printf("��ưT�����s�b");
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// d�G���ӥ������Z�q����C�ƧǨ����
void d(void)
{
	// �p��C��ǥͪ��������Z
	for(int i=0;i<n;i++)
	{
		students[i].avg = (students[i].se + students[i].sp + students[i].sm)/3.0;
	}
	
	// ��w�ƧǡG�q����C�ƦC�������Z
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
	
	// ��ܱƧǵ��G
	for(int i=0;i<n;i++)
	{
		printf("�m�W:%6s �Ǹ�:%d �������Z:%.2f\n",students[i].name,students[i].ID,students[i].avg);
	}
	getch();
	system("CLS");
	fflush(stdin); 
}

// e�G�߰ݬO�_�h�X�{��
int e(void)
{
	char yn;
	while(1)
	{
		printf("�T�w���}?(y/n)");
		scanf(" %c",&yn);  // �e���Ů��קK�P�e�@����J�Ĭ�
		if(yn=='y')
		{
			return 0;     // �^�� 0 �N��h�X
			break;
		}
		else if(yn=='n') break; // ���h�X�h���X�߰�
	}
}

// �D�{���J�f
int main()
{
	// �w��e��
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

    // �K�X���ҳ̦h�T��
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;   // ���T�Y���X
        printf("��J���~,�Э��s��J\n");
        if (i == 3) return 0;      // ���T�����}
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
		scanf(" %c", &input);  // Ū���ﶵ�]�Ů��קK�P���e��J�Ĭ�^

		system("CLS");
		fflush(stdin); 

		// ��������\��
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
			if(e() == 0) break;  // �Y�^�� 0 �h�����j��
			system("CLS");
			fflush(stdin); 
		}
	}
	return 0;
}

/*
�o���s�@�ǥͦ��Z�t�ΡA���ڧ���xC�y�������c�P�޿�B�z�A
�S�O�O��ƿ�J�B�ƧǻP�j�M�\�઺��@�A���U�󴣤ɹ�Ƚs�{��O�C
*/

