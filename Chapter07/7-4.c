#include<stdio.h>
int main()
{
	int x = 0, y =0, num = 0;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &num);

	for (y = 1; y <= num; y++) // x�� ������ y�� ������
	{
		for (x = 1; x <= y; x++)
		{
			printf("%d", y);
		}
		printf("\n");
	}
}