#include<stdio.h>
int main()
{
	int x;
	double ft,in;

	printf("키를 입력하시오 :");
	scanf("%d", &x);
	in = x / 2.54;
	ft = x / 12;

	printf("%d cm 는 %.0lf 피트 %lf 인치 입니다.\n", x, in, ft);
	return 0;

}
