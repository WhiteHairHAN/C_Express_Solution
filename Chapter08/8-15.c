#include<stdio.h>

int main()
{
	double round(double);
	double number;
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &number);
	printf("�ݿø��� ���� %lf",round(number));
}

double round(double number)
{
	return (int)(number + 0.5);  //int�� ����� double �������� �������ڸ� ����
}