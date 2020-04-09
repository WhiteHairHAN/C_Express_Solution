#include<stdio.h>

int main()
{
	int n;
	int get_tri_number(int);
	printf("n번째 삼각수 계산프로그램");
	scanf("%d", &n);
	printf("합은 %d 입니다.", get_tri_number(n));
}

int get_tri_number(int n)
{
	if (n <= 1)
		return 1;
	else
	return n + get_tri_number(n - 1);
}