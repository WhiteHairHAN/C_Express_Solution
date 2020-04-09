#include<stdio.h>

void main()
{
	int i, j, sum=0;
	int px[3][5] = 
	{ {12,56,32,16,98},
	{99,56,34,41,3},
	{65,3,87,78,21} };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", px[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum += px[i][j];
			printf("%d", px[i][j]);
		}
		printf("%d\n", sum);
	}
	

	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += px[j][i];
		}
		
		printf("%d\n", sum);
	}

}