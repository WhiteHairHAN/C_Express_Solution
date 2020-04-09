#include<stdio.h>
int main()
{
	int time, age;
	printf("현재 시간과 나이를 입력하시오 (시간,나이)");
	scanf("%d %d", &time, &age);

	if (time < 18)
	{
		if ((age > 3 && age < 12) || (age > 65))
			printf("25,000\n");
		else
			printf("34,000\n");
	}
	else
		printf("10,000\n");
}