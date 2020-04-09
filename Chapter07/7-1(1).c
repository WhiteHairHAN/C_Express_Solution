#include<stdio.h>
int main()
{
	int x, sum;
	x = 1;
	sum = 0;
	while (x<=100)
	{
		if (x%3 ==0)
		sum = sum + x;
		x++;
	}
	printf("1부터 100까지의 합계는 %d 입니다.\n",sum);
	
}