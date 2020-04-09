#include<stdio.h>
int main()
{
	int x, y, z,min;
	printf("3개의 정수를 입력하시오 :");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = (y < z) ? y : z;
	else
		min = (x < z) ? x : z;

	printf("제일 작은 정수는 %d 입니다.\n", min);
}