#include<stdio.h>
int is_multiple(int n, int m);
int n, m;
void main()
{
	printf("ù��° ������ �Է��Ͻÿ� :");
	scanf("%d", &n);
	printf("�ι�° ������ �Է��Ͻÿ� :");
	scanf("%d", &m);
	printf("%d �� %d�� ��� %s", n, m, is_multiple(n, m) ? "�Դϴ�.\n" : "�� �ƴϴ�.\n");
}

int is_multiple(int n,int m)
{
	return n % m == 0;
	
}