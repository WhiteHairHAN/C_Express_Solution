#include<stdio.h>

int main(void)
{
	int add(int, int);
	int sub(int, int);
	int mul(int, int);
	int div(int, int);

	char op;
	int m, n, result;

	while (1)
	{
	printf("������ �Է��Ͻÿ�:");
	scanf("%d %c %d", &m, &op, &n);
	
		if (op == '+')
			result = add(m, n);
		else if (op == '-')
			result = sub(m, n);
		else if (op == '*')
			result == mul(m, n);
		else if (op == '/')
			result == div(m, n);
		printf("������ : %d\n", result);
	}
	
}

int add(int m, int n)
{
	static int count = 0;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++count);
	return m + n;
}

int sub(int m, int n)
{
	static int count = 0;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++count);
	return m - n;
}

int mul(int m, int n)
{
	static int count = 0;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++count);
	return m * n;
}

int div(int m, int n)
{
	static int count = 0;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", ++count);
	return m / n;
}