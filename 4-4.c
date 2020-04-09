#include<stdio.h>
int main()

{
	int w = 0, h = 0, d = 0;
	float k = 0;

	printf("상자의 가로, 세로, 높이를 한번에 입력:");
	scanf("%d %d %d", &w, &h, &d);
	k = w*h*d;
	printf("상자의 부피는 %f 입니다.\n", k);
	return 0;

}