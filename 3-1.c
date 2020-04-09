#include <stdio.h>
int main(void)
{
	int x,y,z;
	float sum, ave;
	
	printf("실수를 입력하시오 : ");
	scanf("%d", &x);
	printf("실수를 입력하시오 : ");
	scanf("%d", &y);
	printf("실수를 입력하시오 : ");
	scanf("%d", &z);
	
	sum = x + y + z;
	ave = sum / 3;
	printf("합계는 %f 이고, 평균값은 %f 입니다.\n", sum, ave);

	return 0;
}