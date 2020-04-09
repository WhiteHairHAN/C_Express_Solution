#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void)
{
	int get_random(void);

	printf("%d\n", get_random);
	printf("%d\n", get_random);
	printf("%d\n", get_random);
	printf("%d\n", get_random);
}

int get_random(void)
{
	static int inited = 0;
	if (inited == 0)
	{
		srand((unsigned int)time(NULL));
		inited = 1;
	}
	return rand();
}