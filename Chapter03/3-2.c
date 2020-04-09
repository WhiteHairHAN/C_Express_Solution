#include<stdio.h>
int main()
{
	int mile;
	float meter;
	printf("마일을 입력하시오 :");
	scanf("%d", &mile);
	meter = 1609*mile;
	printf("%d 마일은 %f 미터입니다.\n", mile, meter);
	return 0;
}