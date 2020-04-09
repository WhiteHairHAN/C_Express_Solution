#include<stdlib.h> //sran를 쓰기위한 헤더파일
#include<stdio.h>
#include<time.h> //난수함수의 시드를 매순간 다른 시간으로 사용하기위해 불러옴

	int main()
	{
		int a, b;

		srand((unsigned)time(NULL));
		b = (rand() % 3) + 1;

		printf("선택하시오(1: 가위 2: 바위 3: 보)");
		scanf("%d", &a);

		printf("사용자:");
		switch (a)
		{
		case 1:
			printf("가위\n");
			break;
		case 2:
			printf("바위\n");
			break;
		case 3:
			printf("보\n");
			break;
		}


		printf("컴퓨터:");
		switch (b)
		{
		case 1:
			printf("가위\n");
			break;
		case 2:
			printf("바위\n");
			break;
		case 3:
			printf("보\n");
			break;
		}

		if (a == b)
			printf("비겼음\n");
		else if (a == 1 && b == 3)
			printf("이겼음\n");
		else if (a == 2 && b == 1)
			printf("이겼음\n");
		else if (a == 3 && b == 2)
			printf("이겼음\n");
		else
			printf("졌음\n");

		return 0;
	}
