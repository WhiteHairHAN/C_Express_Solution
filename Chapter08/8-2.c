#include<stdio.h>
double f_to_c(double);
double f;

void main()
{
	printf("화씨 온도를 입력하시오 :");
	scanf("%lf", &f);
	printf("섭씨온도는 %lf 입니다.\n", f_to_c(f));
}

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}
