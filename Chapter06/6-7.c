#include<stdio.h>
int main()
{
	int x, y;
	float p;
	printf("ü�߰� Ű�� �Է��Ͻÿ�.(Ű,ü��) :");
	scanf("%d %d", &x, &y);
	p = (x - 100)*0.9;

	if (p < y)
		printf("�� ��ü��\n");
	else
		printf("����\n");
}