#include<stdio.h>
#include<math.h>
#define pie 3.141592
int main(void)
{
	double r, a=0,v=0;
	printf("���� �������� �Է��Ͻÿ�");
	scanf("%lf", &r);

	a = 4 * pie*r*r;
		v = (4 / 3)*pie*r*r*r;

	printf("���� ǥ����:%lf\n���� ü��:%lf\n", a, v);

	return 0;
}