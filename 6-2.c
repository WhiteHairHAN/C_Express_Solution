#include<stdio.h>
int main()
{
	int x, y;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &y);

	if (x % y == 0)
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");
}