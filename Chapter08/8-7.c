#include<stdio.h>
#include<stdlib.h>


int b_rand();
int main(void)
{
	char c;
	int answer,coin;

	while (1)
	{
		printf("�ո�Ǵ� �޸�(1�Ǵ� 0):");
		scanf("%d", &answer);
		coin = b_rand();
		if (coin == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
		printf("�����?(y or n)");
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