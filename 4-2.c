#include<stdio.h>

int main()
{
	int data = 0;
	printf("16진수 정수를 입력하시오 :");
	scanf("%x", &data);

	printf("8진수로는 %o 입니다.\n", data);
	printf("10진수로는 %d 입니다.\n", data);
	printf("16진수로는 %x 입니다.\n", data);

	return 0;
}