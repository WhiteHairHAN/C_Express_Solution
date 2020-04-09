#include<stdio.h>
#include<stdlib.h>
int b_rand();
int i;
void main(void)
{
	srand((unsigned)time(NULL));
	for (i = 1; i < 6; i++)
	{
		printf("%d", b_rand());
	}
}

int b_rand()
{
	return rand() % 2;
}