#include<stdio.h>
#define E 0.000001
void main()
{
	int f_equal(double, double); // 같음,같지않음 판별
	double f_abs(double); // 분자값
	double f_min(double, double);//분모값

	double a, b;

	printf("실수를 입력하시오:");
	scanf("%lf", &a);
	printf("실수를 입력하시오:");
	scanf("%lf", &b);

	printf("두개의 실수는 서로 %s\n",f_equal(a,b)? "같음" :"다름");
}

double f_abs(double n)
{
	return n > 0.0 ? n : -n;
}

double f_min(double a, double b)
{
	return a > b ? a : b;
}

int f_equal(double a, double b)
{
	return f_abs(a - b) / f_min(f_abs(a), f_abs(b)) < E;
}