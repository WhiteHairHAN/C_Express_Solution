#include <stdio.h>
void main()// 어려워서 답을 복붙밖에안함
{
	int i, j;
	for (i = 2; i <= 100; i++) // 1부터 100까지 수를 정해야됨
	{
		for (j = 2; j < i; j++) // 약수가 1과 자기자신의 수여야됨
		{
			if (i % j == 0) //ㅅㅂ;
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
}