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
	printf("1���� 100������ �հ�� %d �Դϴ�.\n",sum);
	
}