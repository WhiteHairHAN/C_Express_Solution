#include<stdio.h>
int main()
{
	int x, y, z, max;
	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);
	max = (x > z ? x : z) > y ? (x > z ? x : z) : y;
	printf("�ִ밪 : %d \n", max);
	return 0;
}