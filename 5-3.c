#include<stdio.h>
int main()
{
	int x, y, z, max;
	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &x, &y, &z);
	max = (x > z ? x : z) > y ? (x > z ? x : z) : y;
	printf("최대값 : %d \n", max);
	return 0;
}