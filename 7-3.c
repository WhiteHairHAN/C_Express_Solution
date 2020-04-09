#include<stdio.h>
int main()
{
	int x, y = 0;
	for (x = 1; x <= 7; x++)
	{
		for (y = 0; y < 7-x; y++)
		{
			printf(" ");
		}
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}