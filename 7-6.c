#include<stdio.h>
int main()
{
	char op;
	int x=0, y,sum;

	while (1)
	{
		printf("***********\n");
		printf("A---- Add\n");
		printf("S---- Subtract\n");
		printf("M---- Multiply\n");
		printf("D---- Divine\n");
		printf("Q---- Quit\n");
		printf("***********\n");
		do {
			printf("������ �����Ͻÿ� :");
			scanf(" %c", &op);
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' &&op!='Q');

		if (op == 'Q')
			break;

		printf("�μ��� �������� �и��Ͽ� �Է��ϼ���:");
		scanf("%d %d", &x, &y);

		switch (op)
		{
		case 'A':
			sum = x + y;
			break;
		case 'S':
			sum = x - y;
			break;
		case 'M':
			sum = x * y;
			break;
		case 'D':
			sum = x / y;
			break;
		case 'Q':
			break;
		}
		printf("������ ����� %d �Դϴ�.\n", sum);
	}
}