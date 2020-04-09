#include<stdio.h>
int main()
{
	int x, y;
	float p;
	printf("체중과 키를 입력하시오.(키,체중) :");
	scanf("%d %d", &x, &y);
	p = (x - 100)*0.9;

	if (p < y)
		printf("넌 과체중\n");
	else
		printf("정상\n");
}