#include<stdio.h>
int even(int n);
int absolute(int n);
int sign(int n);

void main(void)
{
	int i;
	printf("정수를 입력하시오 :");
	scanf("%d", &i);

	printf("even()의 결과 : %s\n",even(i) ?"짝수" : "홀수");
	printf("absoulute()의 결과 : %d\n", absolute(i));
	printf("sign()의 결과 : %s\n", sign(i) == 1 ? "양수" : sign(i) == -1 ? "음수" : "0");
}

int even(int n)
{
	return n % 2 == 0;
}

int absolute(int n)
{
	return n > 0 ? n : -n;
}

int sign(int n)
{
	return n > 0 ? 1 : (n < 0 ? -1 : 0);
}