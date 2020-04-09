#include<stdio.h>

int add_count = 0;
int sub_count = 0;
int mul_count = 0;
int div_count = 0;

void main(void)
{
	int add(int, int);
	int sub(int, int);
	int mul(int, int);
	int div(int, int);

	char op;
	int m, n, result;
	while (1)
	{
		printf("연산을 입력하시오 : ");
		scanf("%d %c %d", &m, &op, &n);

		if (op == '+')
		{
			result = add(m, n);
		}
		else if (op == '-')
		{
			result = sub(m, n);
		}
		else if (op == '*')
		{
			result = mul(m, n);
		}
		else if (op == '/')
		{
			result = div(m, n);
		}
		printf("연산결과 : %d \n", result);
	}
}

int add(int m, int n)
{
	printf("덧셈은 총 %d번 실행되었습니다.\n", ++add_count);
	return m + n;
}

int sub(int m, int n)
{
	printf("뺄셈은 총 %d번 실행되었습니다.\n", ++sub_count);
	return m - n;
}

int mul(int m, int n)
{
	printf("곱셈은 총 %d번 실행되었습니다.\n", ++mul_count);
	return m*n;
}

int div(int m, int n)
{
	printf("나눗셈은 총 %d번 실행되었습니다.\n", ++div_count);
	return m / n;
} 
