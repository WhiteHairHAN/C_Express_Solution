#include<stdio.h>

int main()
{
	int n;
	int get_tri_number(int);
	printf("n��° �ﰢ�� ������α׷�");
	scanf("%d", &n);
	printf("���� %d �Դϴ�.", get_tri_number(n));
}

int get_tri_number(int n)
{
	if (n <= 1)
		return 1;
	else
	return n + get_tri_number(n - 1);
}