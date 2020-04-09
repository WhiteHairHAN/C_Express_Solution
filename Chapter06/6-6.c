#include<stdio.h>
int main()
{
	int x;
	printf("월 번호를 입력하시오. (1~12사이) :");
	scanf("%d", &x);

	switch (x) {
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	case 5:
		printf("5");
		break;
	case 6:
		printf("6");
		break;
	case 7:
		printf("7");
		break;
	case 8:
		printf("9");
		break;
	case 9:
		printf("9");
		break;
	case 10:
		printf("10");
	case 11:
		printf("11");
		break;
	case 12:
		printf("12");
		break;

	}
}