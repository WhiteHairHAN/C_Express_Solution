#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
	double f_rand();
	int i;
	srand((unsigned)time(NULL));

	for (i = 1; i < 6; i++)
	{
		printf("%lf ", f_rand());
	}
}

double f_rand()
{
	return rand()/ (double)RAND_MAX;
}