#include<stdio.h>
int main()
{
	int x, sum;
	sum = 0;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			sum = sum + x;
	}
	printf("1부터 100사이의 모든 3의 배수이 합은 %d 입니다.", sum);
}