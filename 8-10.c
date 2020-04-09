#include<stdio.h>
int is_multiple(int n, int m);
int n, m;
void main()
{
	printf("첫번째 정수를 입력하시오 :");
	scanf("%d", &n);
	printf("두번째 정수를 입력하시오 :");
	scanf("%d", &m);
	printf("%d 는 %d의 배수 %s", n, m, is_multiple(n, m) ? "입니다.\n" : "가 아니다.\n");
}

int is_multiple(int n,int m)
{
	return n % m == 0;
	
}