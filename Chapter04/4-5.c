#include <stdio.h>
int main()
{
	double x,y;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("���� �Է��ϼ���. :");
	scanf("%lf",& x);
	y = SQMETER_PER_PYEONG*x;
	printf("%lf �������Դϴ�", y);
	return 0;
}