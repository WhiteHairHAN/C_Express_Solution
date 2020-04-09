#include<stdio.h>

int main(void)
{
	int days[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < 12; i++)
	{
		printf("%d 월은 %d 일 까지 있습니다.\n", i + 1, days[i]);
	}
}