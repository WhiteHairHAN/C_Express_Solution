#include<stdio.h>
int main()
{
	int x, sum;
	sum = 0;
	x = 0; // x�� sum �ʱ�ȭ�� �ʼ�! ���� ������ ���α׷��� ����������
	do
	{
		if (x % 3 == 0)
		
			sum = sum + x;
			x++;
		
	} while (x <= 100);

		printf("1���� 100������ 3�� ����� ���� %d �Դϴ�.", sum);
}