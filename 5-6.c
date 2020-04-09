#include<stdio.h>
int main(void)
{
	int x;
	printf("정수를 입력하시오:");
	scanf("%d", &x);

	printf("2의보수:%d", ~x + 1);

	return 0;
}