#include<stdio.h>
#include<stdlib.h>

// �ŧi�����ܼ� n�G�ǥͤH��
int n;

// �w�q�ǥ͵��c�G�]�t�m�W�B�Ǹ��B�T�즨�Z
struct student {
	char name[20]; // �m�W
	int ID;        // �Ǹ�
	int sm;        // �ƾ�
	int sp;        // ���z
	int se;        // �^��
} students[10];    // �̦h10��ǥ�

// �禡 a�G��J�ǥ͸��
void a(void)
{
	// ����Ʀr�}�C�A�Ω󴣥ܲĴX��ǥ�
	char *arr[]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q"};

	// ���ܿ�J�H��
	printf("�п�J�����(5~10):");
	scanf("%d",&n);

	// ���ҿ�J�d��O�_�X�k
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

		// ��J�Ǹ������Ҭ�6���
		printf("�п�J�Ǹ�(6���):");
		while(1){
			scanf("%d",&students[i].ID);
			if(students[i].ID>=100000 && students[i].ID<=999999)
			{
				break;
			}
			printf("�Э��s��J");
		};

		// ��J�ƾǦ��Z�����ҽd��
		printf("�п�J�ƾǦ��Z(0~100):");
		while(1){
			scanf("%d",&students[i].sm);
			if(students[i].sm>=0 && students[i].sm<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};

		// ��J���z���Z
		printf("�п�J���z���Z(0~100):");
		while(1){
			scanf("%d",&students[i].sp);
			if(students[i].sp>=0 && students[i].sp<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};

		// ��J�^�妨�Z
		printf("�п�J�^�妨�Z(0~100):");
		while(1){
			scanf("%d",&students[i].se);
			if(students[i].se>=0 && students[i].se<=100)
			{
				break;
			}
			printf("�Э��s��J");
		};
	}

	// �M���e���P��J�w�İ�
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
}

// �禡 c�G�d�ߥ\��]�|����@�^
void c(void)
{
	
}

// �禡 d�G���Z�Ƨǥ\��]�|����@�^
void d(void)
{
	
}

// �禡 e�G���}�t�Ρ]�|����@�^
void e(void)
{
	
}

int main()
{
	// �w��e�� (ASCII ���N����)
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

	// �K�X���Ҿ���A�̦h�T�����|
	int mima, i = 0;
	while (1){
		i++;
		scanf("%d", &mima);
		if (mima == 2025) break;   // �K�X���T���X
		printf("��J���~,�Э��s��J\n");
		if (i == 3) return 0;      // ���T�������{��
	}

	system("CLS");
	fflush(stdin); 
	
	// �D�\����j��
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
		scanf(" %c", &input);  // ������@�r���]�e�Ů��קKŪ�J����š^

		system("CLS");
		fflush(stdin); 

		// �ھڿ�J��������\��
		if(input=='a')
		{
			printf("(a)\n"); 
			a();	// �I�s��J��ưƵ{��
		}

		if(input=='b')
		{
			printf("(b)\n");
			b();    // �I�s��ܸ�ưƵ{��
		} 

		if(input=='c')
		{
			printf("(c)");
			c();    // �I�s�d�߸�ưƵ{���]�|����@�^
		} 

		if(input=='d')
		{
			printf("(d)");
			d();    // �I�s�ƧǸ�ưƵ{���]�|����@�^
		} 

		if(input=='e')
		{
			printf("(e)");
			e();    // �I�s���}�t�ΰƵ{���]�|����@�^
		} 
	}

	return 0;
}


