#include<stdio.h>
#include<math.h>

double get_distance(double, double, double, double);

void main(void)
{
	double x1, x2, y1, y2;
	printf("ù��° ���� ��ǥ�� �Է��ϼ���. (x,y)");
	scanf("%lf %lf", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��ϼ���. (x,y)");
	scanf("%lf %lf", &x2, &y2);
	printf("���� ������ �Ÿ��� %lf �Դϴ�.\n", get_distance(x1,y1,x2,y2));
}

double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}