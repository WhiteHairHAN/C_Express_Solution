#include<stdio.h>

int main()
{
	int array_equal(int a[], int b[], int size);
	int a[5] = { 0 };
	int b[5] = { 0 };
	int i;
	puts("첫 번째 배열에 들어갈 정수 10개를 입력하시오.");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	puts("두 번째 배열에 들어갈 정수 10개를 입력하시오.");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("%d \n", array_equal(a, b, 5));
		return 0;
}

int array_equal(int a[], int b[], int size)
{
	int i, result;
	for (i = 0; i < 5; i++)
	{
		if (a[i] == b[i])
			result= 1;
		else result= 0;
	}
	return result;
}