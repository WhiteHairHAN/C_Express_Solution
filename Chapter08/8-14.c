#include<stdio.h>

void main()
{
	int is_leap(int);

	int day = 365;
	int n;

	printf("�⵵�� �Է��ϼ���:");
	scanf("%d", &n);

	if (is_leap(n))
		//((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
	{
		day++;
	}
	printf("%d���� %d���Դϴ�.\n", n, day);
}

int is_leap(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}