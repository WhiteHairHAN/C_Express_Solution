#include<stdio.h>
void main(void)
{
	double recursive(int);
	int n;
	printf("���Ѽ��� ���α׷�."); 
	scanf("%d", &n);
	printf("%lf", recursive(n));
}

double recursive(int n)
{
	if (n <= 1)
		return 1.0;
	else
	{
		return 1.0 / n + recursive(n - 1);
	}
}