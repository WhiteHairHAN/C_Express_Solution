#include<stdio.h>
#define pi 3.141592

void main() {
	double cal_area(double);
	double r;
	printf("원의 반지름을 입력하시오.");
	scanf("%lf", &r);
	printf("원의 면적은 %lf 입니다.\n", cal_area(r));
}

double cal_area(double r)
{
	return pi *r*r;
}

/* #include<stdio.h> //이 코드도 되는데 문제의 조건에 맞지 않는다.
double cal_area(double radius);
double input,radius;
void main()
{
	printf("원의 반지름을 입력하시오 :");
	scanf("%lf", &input);
	printf("원의 면적은 %lf 입니다.\n",cal_area(radius));
}

double cal_area(double radius)
{
	return 3.141592 *input*input;
}*/