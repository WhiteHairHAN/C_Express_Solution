#include<stdio.h>

int main()
{
	void print_menu(void);
	int check_menu_number(int);
	void print_select_menu(int);

	int choice;
	while (1)
	{
		
		print_menu();
		printf("원하는 메뉴를 골라요:");
		scanf("%d", &choice);

		if (check_menu_number(choice))
		{
			if (choice < 4)
				print_select_menu(choice);
			else
				break;
		}
	}
}
void print_menu(void)
{
		printf("1.햄버거\n");
		printf("2.치즈버거\n");
		printf("3.샌드위치\n");
		printf("4.종료\n");
}

int check_menu_number(int choice)
{
	return choice >= 1 && choice <= 4;
}

void print_select_menu(int choice)
{
	printf("%d 번 메뉴가 선택되었습니다.\n", choice);
}