#include<stdio.h>

void main()
{
	int nums[10][3];
	int i, n;

	for (i = 0; i < 10; i++)
	{
		nums[i][0] = i + 1;
		nums[i][1] = (i + 1) * (i + 1);
		nums[i][2] = (i + 1) * (i + 1) * (i + 1);
	}

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (nums[i][2] == n)
		{
			break;
		}
	}

	if (i == 10)
	{
		printf("입력한 정수가 없습니다.\n");

	}

	else
		printf("입력한 정수의 세제곱근은 %d 입니다.", nums[i][0]);
}