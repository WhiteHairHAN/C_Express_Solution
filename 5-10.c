#include<stdio.h>
int main()
{
	int x, y;
	printf("x좌표를 입력하세요.");
	scanf("%d", &x);
	printf("y좌표를 입력하세요.");
	scanf("%d", &y);

	if (x != 0 && y != 0) // 변형버전 , 사분면을 나누는 프로그램에 x,y둘중하나라도 0이면 사분면에 속하지않는
	{						// 프로그램 작성
		(x > 0 && y > 0) ? printf("\n1사분면 입니다.\n\n") : (x > 0 && y < 0) ? printf("\n4사분면 입니다.\n\n") :
			(x < 0 && y>0) ? printf("\n2사분면 입니다.\n\n") : printf("\n3사분면 입니다.\n\n");
	}
	else
		printf("\n어느 사분면에도 속하지 않습니다.\n\n");

}