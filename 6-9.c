#include<stdio.h>
int main()
{
	double x,y;
	printf("x�� ���� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	if (x <= 0)
	{
		y = x*x*x - 9.0* x + 2.0;
		printf("f(x)�� ���� %lf �Դϴ�.",y);
	}
	else
	{
		y = 7.0 * x + 2.0;
		printf("f(x)�� ���� %lf �Դϴ�.", y);
	}
}