#include <stdio.h>

int balance = 0;

void main()
{
	void save(int);
	void draw(int);

	int n, money;

	while (1)
	{
		printf("�޴��� �����ϼ���. ����(1), ����(2) : ");
		scanf("%d", &n);
		printf("%s�� �ݾ� : ", n == 1 ? "����" : "����");
		scanf("%d", &money);
		if (n == 1)
		{
			save(money);
		}
		else if (n == 2)
		{
			draw(money);
		}
		printf("���� �ܾ��� %d�Դϴ�. \n ", balance);
	}
}

void save(int money)
{
	balance += money;
}

void draw(int money)
{
	balance -= money;
}