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
		printf("���ϴ� �޴��� ����:");
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
		printf("1.�ܹ���\n");
		printf("2.ġ�����\n");
		printf("3.������ġ\n");
		printf("4.����\n");
}

int check_menu_number(int choice)
{
	return choice >= 1 && choice <= 4;
}

void print_select_menu(int choice)
{
	printf("%d �� �޴��� ���õǾ����ϴ�.\n", choice);
}