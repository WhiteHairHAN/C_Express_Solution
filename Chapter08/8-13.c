#include <stdio.h>

void main(void)
{
	int factorial(int);

	int i, n;
	double e = 1.0;

	printf("������ ����ұ�� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		e += (1.0 / factorial(i));
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.\n", e);
}

int factorial(int n)
{
	int i;
	int fact = 1;

	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}