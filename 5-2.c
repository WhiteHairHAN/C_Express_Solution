#include <stdio.h>
int main()
{
	double x, y;
	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf %lf", &x, &y);
	printf("%lf \t %lf \t %lf \t %lf", x + y, x - y, x*y, x / y);
	return 0;
}