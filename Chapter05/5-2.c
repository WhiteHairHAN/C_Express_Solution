#include <stdio.h>
int main()
{
	double x, y;
	printf("두개의 실수를 입력하시오 :");
	scanf("%lf %lf", &x, &y);
	printf("%lf \t %lf \t %lf \t %lf", x + y, x - y, x*y, x / y);
	return 0;
}