#include <stdio.h>

int main(void)
{
	FILE *fp = stdin;

	/*int nData = 0;
	scanf_s("%d", &nData);*/


	int nAge = 0;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);
	//엔터가 추가되어있어서 gets_s에서 엔터 부터 읽는다.
	// 이 엔터 데이터를 없애는 방법
	//1. getchar();
	//2. fflush(stdin);
	//3. scanf_s("%d%*c", &nAge); - 버퍼에 있는 한 글자를 읽어다가 소멸
	fflush(stdin);
	
	char szName[12] = { 0 };
	printf("이름을 입력하세요 :");
	gets_s(szName, sizeof(szName));

	printf("%d, %s\n", nAge, szName);


	return 0; 
}