#include<stdio.h>
double f_to_c(double);
double f;

void main()
{
	printf("ȭ�� �µ��� �Է��Ͻÿ� :");
	scanf("%lf", &f);
	printf("�����µ��� %lf �Դϴ�.\n", f_to_c(f));
}

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}
