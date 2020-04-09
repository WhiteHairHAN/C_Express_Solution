#include<stdio.h>
int main()
{
	double x,y;
	printf("x의 값을 입력하시오:");
	scanf("%lf", &x);

	if (x <= 0)
	{
		y = x*x*x - 9.0* x + 2.0;
		printf("f(x)의 값은 %lf 입니다.",y);
	}
	else
	{
		y = 7.0 * x + 2.0;
		printf("f(x)의 값은 %lf 입니다.", y);
	}
}