#include<stdio.h>
#include<math.h>
#define pie 3.141592
int main(void)
{
	double r, a=0,v=0;
	printf("구의 반지름을 입력하시오");
	scanf("%lf", &r);

	a = 4 * pie*r*r;
		v = (4 / 3)*pie*r*r*r;

	printf("구의 표면적:%lf\n구의 체적:%lf\n", a, v);

	return 0;
}