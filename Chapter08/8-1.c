#include<stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

void main(void)
{
	int i;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &i);

	printf("even()�� ��� : %s\n",even(i) ?"¦��" : "Ȧ��");
	printf("absoulute()�� ��� : %d\n", absolute(i));
	printf("sign()�� ��� : %s\n", sign(i) == 1 ? "���" : sign(i) == -1 ? "����" : "0");
}

int even(int n)
{
	return n % 2 == 0;
}

int absolute(int n)
{
	return n > 0 ? n : -n;
}

int sign(int n)
{
	return n > 0 ? 1 : (n < 0 ? -1 : 0);
}