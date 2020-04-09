#include<stdio.h>
int main()
{
	float AC, AE, BC, DE;
	
	printf("AC를 입력하세요 :");
	scanf("%f", &AC);
	printf("AE를 입력하세요 :");
	scanf("%f", &AE);
	printf("BC를 입력하세요 :");
	scanf("%f", &BC);

	DE = (AE*BC) / AC;
	printf("DE의 길이는 %f 입니다.\n", DE);

}