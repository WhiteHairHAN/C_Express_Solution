#include<stdio.h>
#define pi 3.141592

void main() {
	double cal_area(double);
	double r;
	printf("���� �������� �Է��Ͻÿ�.");
	scanf("%lf", &r);
	printf("���� ������ %lf �Դϴ�.\n", cal_area(r));
}

double cal_area(double r)
{
	return pi *r*r;
}

/* #include<stdio.h> //�� �ڵ嵵 �Ǵµ� ������ ���ǿ� ���� �ʴ´�.
double cal_area(double radius);
double input,radius;
void main()
{
	printf("���� �������� �Է��Ͻÿ� :");
	scanf("%lf", &input);
	printf("���� ������ %lf �Դϴ�.\n",cal_area(radius));
}

double cal_area(double radius)
{
	return 3.141592 *input*input;
}*/