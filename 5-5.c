#include<stdio.h>
int main()
{
	int x;
	printf("정수를 입력하시오 :");
	scanf("%d", &x);
	printf("십의자리 : %d\n", x / 10);
	printf("일의자리 : %d\n", x % 10);
	return 0;
}