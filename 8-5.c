#include<stdio.h>
#include<math.h>
#define pi 3.141592
double sin_degree(double degree);
double rad,degree;
int x;//����

void main()
{
	rad = (x*pi) / 180.0;
	for (x = 0; x <= 180; x = x + 10)
	{
		printf("sin (%d)�� ���� %lf\n", x, sin_degree(degree));
	}
	printf("������ �Է��ϼ���.");
	scanf("%d", &x);
	printf("sin (%d)�� ���� %lf\n", x, sin_degree(degree));
}

double sin_degree(degree)
{
	rad = (x*pi) / 180.0;
	return sin(rad);
}