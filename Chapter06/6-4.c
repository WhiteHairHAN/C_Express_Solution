#include<stdlib.h> //sran�� �������� �������
#include<stdio.h>
#include<time.h> //�����Լ��� �õ带 �ż��� �ٸ� �ð����� ����ϱ����� �ҷ���

	int main()
	{
		int a, b;

		srand((unsigned)time(NULL));
		b = (rand() % 3) + 1;

		printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
		scanf("%d", &a);

		printf("�����:");
		switch (a)
		{
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("��\n");
			break;
		}


		printf("��ǻ��:");
		switch (b)
		{
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("��\n");
			break;
		}

		if (a == b)
			printf("�����\n");
		else if (a == 1 && b == 3)
			printf("�̰���\n");
		else if (a == 2 && b == 1)
			printf("�̰���\n");
		else if (a == 3 && b == 2)
			printf("�̰���\n");
		else
			printf("����\n");

		return 0;
	}
