#include<stdio.h>
void print_value(int n);

void main(void)
{
	int n;
	while (1)
	{
		printf("���� �Է��Ͻÿ�.(����� ����)");
		scanf("%d", &n);
		if (n < 0)
			break;
		print_value(n);
	}
	return 0;
}

void print_value(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
}