#include<stdio.h>
int main()

{
	int w = 0, h = 0, d = 0;
	float k = 0;

	printf("������ ����, ����, ���̸� �ѹ��� �Է�:");
	scanf("%d %d %d", &w, &h, &d);
	k = w*h*d;
	printf("������ ���Ǵ� %f �Դϴ�.\n", k);
	return 0;

}