#include<stdio.h>
int main()
{
	int x, y, z,min;
	printf("3���� ������ �Է��Ͻÿ� :");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = (y < z) ? y : z;
	else
		min = (x < z) ? x : z;

	printf("���� ���� ������ %d �Դϴ�.\n", min);
}