#include <stdio.h>
int main(void)
{
	int x,y,z;
	float sum, ave;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &y);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%d", &z);
	
	sum = x + y + z;
	ave = sum / 3;
	printf("�հ�� %f �̰�, ��հ��� %f �Դϴ�.\n", sum, ave);

	return 0;
}