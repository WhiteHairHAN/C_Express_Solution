#include <stdio.h>
int main()
{
	double x,y;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("평을 입력하세요. :");
	scanf("%lf",& x);
	y = SQMETER_PER_PYEONG*x;
	printf("%lf 평방미터입니다", y);
	return 0;
}