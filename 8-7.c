#include<stdio.h>
#include<stdlib.h>


int b_rand();
int main(void)
{
	char c;
	int answer,coin;

	while (1)
	{
		printf("앞면또는 뒷면(1또는 0):");
		scanf("%d", &answer);
		coin = b_rand();
		if (coin == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");
		printf("계속할?(y or n)");
		scanf("%c", &c);
		if(c =='n')
		break;
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}