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

	printf("������ �Է��Ͻÿ�:");
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
		printf("�Է��� ������ �����ϴ�.\n");

	}

	else
		printf("�Է��� ������ ���������� %d �Դϴ�.", nums[i][0]);
}