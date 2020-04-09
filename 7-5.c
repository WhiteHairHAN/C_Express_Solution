#include<stdio.h> // 배우지 않은 것
int main()
{
	int a = 0, b = 0, c = 0;

	printf("카운터의 초깃값을 입력하시오:");
	scanf("%d", &a);

	for (b = a; b>0; b--)
	{
		printf("%d ", b);
		for (c = 0; c<2e+8; c++) //카운트하는 사이를 지연시키는 과정
		{
			NULL;
		}
	}
	printf("\n\a");
	return 0;
}