#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   // ���� getch() �ϥ�
#include<string.h>  // ���� strcmp() ���r��ϥ�

// �ŧi�ǥͤH���ܼ�
int n;

// �w�q�ǥ͵��c
struct student {
	char name[20]; // �m�W
	int ID;        // �Ǹ�
	int sm;        // �ƾǦ��Z
	int sp;        // ���z���Z
	int se;        // �^�妨�Z
}students[10];     // �}�C�̦h�s�� 10 ��ǥ�

// �禡 a�G��J�ǥ͸��
void a(void)
{
	// ����Ʀr���ܥΰ}�C
	char *arr[]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q"};

	// ��J�ǥͤH�ƨ����ҽd��
	printf("�п�J�����(5~10):");
	scanf("%d",&n);
	while(n<5||n>10)
	{
		printf("�Э��s��J");
		scanf("%d",&n);
	} 

	// �v�@��J�C��ǥ͸��
	for(int i=0;i<n;i++)
	{
		printf("��J��%s��\n",arr[i]);

		// ��J�m�W
		printf("�п�J�W�r:");
		scanf("%s",students[i].name);
		
		// ��J�����ҾǸ�
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
	// �M���e���P�M����J�w��
	system("CLS");
	fflush(stdin); 	
}

// �禡 b�G��ܩҦ��ǥ͸��
void b(void)
{
	for(int i=0;i<n;i++)
	{
		printf("�m�W:%4s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d\n",
		       students[i].name, students[i].ID, students[i].sm, students[i].sp, students[i].se);
	}
	getch();            // ���ݨϥΪ̫�����~��
	system("CLS");      // �M���e��
	fflush(stdin); 
}

// �禡 c�G�̩m�W�d�߳�@�ǥ͸��
void c(void)
{
	char inputname[10];  // �ΨӦs��d�ߥΪ��m�W
	printf("�п�J�ϥΪ̩m�W\n");
	scanf("%s",inputname);

	// ���Ҧ��ǥͩm�W
	for(int i=0;i<n;i++)
	{
		if(strcmp(inputname,students[i].name)==0)
		{
			// ��ܸӾǥͦ��Z�P����
			printf("�m�W:%4s �Ǹ�:%d �ƾǦ��Z:%d ���z���Z:%d �^�妨�Z:%d �������Z:%.1f\n",
			       students[i].name, students[i].ID,
			       students[i].sm, students[i].sp, students[i].se,
			       (students[i].sm+students[i].sp+students[i].se)/3.0);
		}
		// �Y�O�̫�@�����S���A��ܬd�L��ơ]�`�N�G�o�q�|����h���^
		if(i==(n-1))printf("��ưT�����s�b");
	}
	getch();            // ���ݫ���
	system("CLS");      // �M���e��
	fflush(stdin); 
}

// �禡 d�G�ƦW�\��|����@
void d(void)
{
	
}

// �禡 e�G���}�\��|����@
void e(void)
{
	
}

// �D�{���J�f
int main()
{
	// �w��e���]ASCII ���N�r�^
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

	// �K�X��J�̦h�T��
    int mima, i = 0;
    while (1){
        i++;
        scanf("%d", &mima);
        if (mima == 2025) break;   // �Y���T�h���X
        printf("��J���~,�Э��s��J\n");
        if (i == 3) return 0;      // ���T���h�����{��
    }

    system("CLS");
    fflush(stdin); 
	
	// �D�\����`��
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
		scanf(" %c",&input);     // Ū�J��@�ﶵ�]�Ů��קKŪ������^

		system("CLS");
		fflush(stdin); 

		// �ھڿﶵ�I�s�����禡
		if(input=='a')
		{
			printf("(a)\n"); 
			a();	// ��J���
		}
		if(input=='b')
		{
			printf("(b)\n");
			b();    // ��ܸ��
		} 
		if(input=='c')
		{
			printf("(c)");
			c();    // �d�߾ǥ�
		} 
		if(input=='d')
		{
			printf("(d)");
			d();    // �ƦW�]�|����@�^
		} 
		if(input=='e')
		{
			printf("(e)");
			e();    // ���}�]�|����@�^
		} 
	}
	return 0;
}



