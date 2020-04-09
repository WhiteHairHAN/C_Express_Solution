#include<stdio.h>

void main()
{
	int binomifal_coefficient(int,int);
	int k,n;
	printf("k 와 n 을 입력하시오");
	scanf("%d %d", &k, &n);
	printf("%d\n", binomifal_coefficient(k, n));
}

int binomifal_coefficient(int k, int n)
{
	if (k == 0 || k == n)
	{
		return 1;
	}
	else
	{
		return binomifal_coefficient(k - 1, n - 1) + binomifal_coefficient(k, n - 1);
	}
}