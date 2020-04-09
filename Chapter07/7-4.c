#include<stdio.h>
int main()
{
	int x = 0, y =0, num = 0;
	printf("정수를 입력하시오 :");
	scanf("%d", &num);

	for (y = 1; y <= num; y++) // x는 가로축 y는 세로축
	{
		for (x = 1; x <= y; x++)
		{
			printf("%d", y);
		}
		printf("\n");
	}
}