#include<stdio.h>
#define E 0.000001
void main()
{
	int f_equal(double, double); // ����,�������� �Ǻ�
	double f_abs(double); // ���ڰ�
	double f_min(double, double);//�и�

	double a, b;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &a);
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &b);

	printf("�ΰ��� �Ǽ��� ���� %s\n",f_equal(a,b)? "����" :"�ٸ�");
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