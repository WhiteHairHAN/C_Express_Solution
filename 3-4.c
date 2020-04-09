#include<stdio.h>

int main()
{
	float C,F;
	printf("화씨값을 입력하시오 :" );
	scanf("%f", &F);

	C = (5.0 / 9.)*(F - 32.);

	printf("섭씨값은 %f입니다.\n",C);
	return 0;
}
