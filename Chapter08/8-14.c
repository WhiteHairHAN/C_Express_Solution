#include<stdio.h>

void main()
{
	int is_leap(int);

	int day = 365;
	int n;

	printf("년도를 입력하세요:");
	scanf("%d", &n);

	if (is_leap(n))
		//((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
	{
		day++;
	}
	printf("%d년은 %d일입니다.\n", n, day);
}

int is_leap(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}