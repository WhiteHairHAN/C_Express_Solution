#include<stdio.h>
int main()
{
	int x;
	double ft,in;

	printf("Ű�� �Է��Ͻÿ� :");
	scanf("%d", &x);
	in = x / 2.54;
	ft = x / 12;

	printf("%d cm �� %.0lf ��Ʈ %lf ��ġ �Դϴ�.\n", x, in, ft);
	return 0;

}
