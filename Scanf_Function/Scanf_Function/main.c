#include <stdio.h>

#define MY_K 100

int main2(void)
{
	/*int k = 100;
	char szBuffer[k] = {"Test"};
	----실행 안됨----
	const int k = 100;
	const char szBuffer[k] = {"Test"};
	이렇게 하면 실행 된다고 했지만. 역시나 안됨.

	아래처럼 전처리기를 활용해서 사용하는 방법 뿐.
	*/

	char szBuffer[MY_K] = { "Test" };
	return 0; 
}
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