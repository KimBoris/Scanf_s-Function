#include <stdio.h>

int main(void)
{
	FILE *fp = stdin;

	/*int nData = 0;
	scanf_s("%d", &nData);*/


	int nAge = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);
	//���Ͱ� �߰��Ǿ��־ gets_s���� ���� ���� �д´�.
	// �� ���� �����͸� ���ִ� ���
	//1. getchar();
	//2. fflush(stdin);
	//3. scanf_s("%d%*c", &nAge); - ���ۿ� �ִ� �� ���ڸ� �о�ٰ� �Ҹ�
	fflush(stdin);
	
	char szName[12] = { 0 };
	printf("�̸��� �Է��ϼ��� :");
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);


	return 0; 
}