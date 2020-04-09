#include<stdio.h>
int main()
{
	int x, sum;
	sum = 0;
	x = 0; // x랑 sum 초기화는 필수! 하지 않으면 프로그램상에 오류가생김
	do
	{
		if (x % 3 == 0)
		
			sum = sum + x;
			x++;
		
	} while (x <= 100);

		printf("1부터 100까지의 3의 배수의 합은 %d 입니다.", sum);
}