#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, max_value, max_index;
	int nums[10] = { 0, };

	srand((unsigned int)time(NULL));
	for (i = 1; i <= 100; i++)
	{
		nums[rand() % 10]++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d�� �󵵼� : %d\n", i, nums[i]);
	}
	max_index = 0;
	max_value = nums[0];
	for (i = 1; i < 10; i++)
	{
		if (nums[i] > max_value)
		{
			max_index = i;
			max_value = nums[i];
		}
	}
	printf("%d��(��) ���� ���� �����Ǿ����ϴ�.\n", max_index);
}