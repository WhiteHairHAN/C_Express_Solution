#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	void array_fill(int*, int);
	int i;
	int num[10];
	srand((unsigned)time(NULL));
	array_fill(num, sizeof(num) / sizeof(num[0]));
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}

void array_fill(int *arr, int size)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		*(arr + i) =rand() % 99 + 1;
	}
}