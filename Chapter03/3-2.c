#include<stdio.h>
int main()
{
	int mile;
	float meter;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &mile);
	meter = 1609*mile;
	printf("%d ������ %f �����Դϴ�.\n", mile, meter);
	return 0;
}