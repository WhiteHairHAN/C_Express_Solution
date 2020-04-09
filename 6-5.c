#include<stdio.h>
int main()
{
	int x, y;
	printf("키를 입력하세요 :");
	scanf("%d", &x);
	printf("나이를 입력하세요 :");
	scanf("%d", &y);

	if (x >= 140 && y >= 10)
		printf("타도 좆습니다.\n");
	else
		printf("타기에 부적절합니다.\n");
	
}