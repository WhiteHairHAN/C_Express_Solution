#include<stdio.h>
get_tax(int income);
int income;
void main()
{
	printf("�ҵ��� �Է��Ͻÿ� (����):");
	scanf("%d", &income);
	printf("�ҵ漼�� %d ���� �Դϴ�.\n", get_tax(income));
}

get_tax(income)
{
	if (income <= 1000)
		return income*0.08;
	else
		return income*0.1;
}