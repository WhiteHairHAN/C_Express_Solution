#include<stdio.h>

void main()
{
	void get_sum_diff(int, int, int*, int*);

	int x, y, sum, diff;

	scanf("%d %d ", &x, &y);

	get_sum_diff(x, y, &sum, &diff);
	printf(" Че : %d\n", sum);
	printf(" Тї : %d\n", diff);
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y
		;
}