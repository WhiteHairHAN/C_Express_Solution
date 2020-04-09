#include<stdio.h>
get_tax(int income);
int income;
void main()
{
	printf("소득을 입력하시오 (만원):");
	scanf("%d", &income);
	printf("소득세는 %d 만원 입니다.\n", get_tax(income));
}

get_tax(income)
{
	if (income <= 1000)
		return income*0.08;
	else
		return income*0.1;
}