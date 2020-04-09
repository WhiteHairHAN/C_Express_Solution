#include<stdio.h>

int main()
{
	double round(double);
	double number;
	printf("실수를 입력하시오:");
	scanf("%lf", &number);
	printf("반올림한 값은 %lf",round(number));
}

double round(double number)
{
	return (int)(number + 0.5);  //int를 써줘야 double 형이지만 정수숫자만 나옴
}