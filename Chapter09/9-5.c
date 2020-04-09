#include <stdio.h>

int balance = 0;

void main()
{
	void save(int);
	void draw(int);

	int n, money;

	while (1)
	{
		printf("메뉴를 선택하세요. 저축(1), 인출(2) : ");
		scanf("%d", &n);
		printf("%s할 금액 : ", n == 1 ? "저축" : "인출");
		scanf("%d", &money);
		if (n == 1)
		{
			save(money);
		}
		else if (n == 2)
		{
			draw(money);
		}
		printf("현재 잔액은 %d입니다. \n ", balance);
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