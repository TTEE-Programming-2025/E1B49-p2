#include<stdio.h>
#include<stdlib.h>

// �ŧi�����ܼơG�ǥͤH��
int n;

// �w�q�ǥ͵��c�A�]�t�m�W�B�Ǹ��P�T�즨�Z
struct student {
	char name[20]; // �m�W
	int ID;        // �Ǹ�
	int sm;        // �ƾǦ��Z
	int sp;        // ���z���Z
	int se;        // �^�妨�Z
} students[10];    // �̦h�䴩10��ǥ�

// �禡 a�G��J�ǥ͸��
void a(void)
{
	// ����Ʀr�}�C�A�ΨӴ��ܲĴX��ǥ�
	char *arr[]={"�@","�G","�T","�|","��","��","�C","�K","�E","�Q"};

	// ��J�ǥͤH��
	printf("�п�J�����(5~10):");
	scanf("%d", &n);

	// �ˬd�O�_�b�X�k�d��
	while(n < 5 || n > 10)
	{
		printf("�Э��s��J");
		scanf("%d", &n);
	} 
	
	// ��J�C��ǥ͸��
	for(int i = 0; i < n; i++)
	{
		printf("��J��%s��\n", arr[i]);

		// ��J�m�W
		printf("�п�J�W�r:");
		scanf("%s", students[i].name);
		
		// ��J�Ǹ��A���6���
		printf("�п�J�Ǹ�(6���):");
		while(1){
			scanf("%d", &students[i].ID);
			if(students[i].ID >= 100000 && students[i].ID <= 999999)
			{
				break;
			}  
			printf("�Э��s��J");
		};

		// ��J�ƾǦ��Z�A�d��0~100
		printf("�п�J�ƾǦ��Z(0~100):");
		while(1){
			scanf("%d", &students[i].sm);	
			if(students[i].sm >= 0 && students[i].sm <= 100)
			{
				break;
			}
			printf("�Э��s��J");
		};

		// ��J���z���Z
		printf("�п�J���z���Z(0~100):");
		while(1){
			scanf("%d", &students[i].sp);
			if(students[i].sp >= 0 && students[i].sp <= 100)
			{
				break;
			}
			printf("�Э��s��J");
		};

		// ��J�^�妨�Z
		printf("�п�J�^�妨�Z(0~100):");
		while(1){
			scanf("%d", &students[i].se);
			if(students[i].se >= 0 && students[i].se <= 100)
			{
				break;
			}
			printf("�Э��s��J");
		};
	}

	// ��J������M���e���P�w�İ�
	system("CLS");
	fflush(stdin); 	
}

// �禡 b�G��ܩҦ��ǥͦ��Z�]�|����@�^
void b(void)
{

}

// �禡 c�G�d�߾ǥ͡]�|����@�^
void c(void)
{
	
}

// �禡 d�G���Z�Ƨǡ]�|����@�^
void d(void)
{
	
}

// �禡 e�G���}�t�Ρ]�|����@�^
void e(void)
{
	
}

int main()
{
	// �w��e���A�ϥ� ASCII ���N�r�˹�
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

	// �K�X���ҡA�̦h�i��J�T��
	int mima, i = 0;
	while (1){
		i++;
		scanf("%d", &mima);
		if (mima == 2025) break; // �K�X���T���X
		printf("��J���~,�Э��s��J\n");
		if (i == 3) return 0;    // �T�����~�h�����{��
	}

	system("CLS");
	fflush(stdin); 
	  
	// �D�\����j��
	while (1)
	{
		// ��ܥD���
		printf("--------------------------------------\n");
		printf("|   a.Enter student grades           |\n");
		printf("|   b.Display student grades         |\n");
		printf("|   c.Search for student grades      |\n");
		printf("|   d.Grade ranking                  |\n");
		printf("|   e.Exit system                    |\n");
		printf("--------------------------------------\n");
        
		char input;
		scanf(" %c", &input);  // Ū�����ﶵ�]�e���Ů�i���� Enter ��z�Z�^

		system("CLS");         // �M���e��

		// �P�_��J�éI�s�����\��
		if(input == 'a')
		{
			printf("(a)");
			a();	// ��J���
		}
		if(input == 'b')
		{
			printf("(b)");
			b();    // ��ܦ��Z�]����@�^
		} 
		if(input == 'c')
		{
			printf("(c)");
			c();    // �d�ߦ��Z�]����@�^
		} 
		if(input == 'd')
		{
			printf("(d)");
			d();    // �ƦW�\��]����@�^
		} 
		if(input == 'e')
		{
			printf("(e)");
			e();    // ���}�t�Ρ]����@�^
		} 
	}
	return 0;
}

