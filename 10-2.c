#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int x[10] = { 0 };
	int i,max,min;
	for (i = 0; i < 10; i++)
	{
		x[i] = rand();
	}
	max = x[0];
	min = x[0];

	for (i = 1; i < 10; i++)
	{
		if (max < x[i])
			max = x[i];
		if (min > x[i])
			min = x[i];
	}
	printf("최대값은 %d 입니다.\n", max);
	printf("최솟값은 %d 입니다.\n", min);
}