#include<stdio.h>
void word_delete_space(char *word);
void main()
{
	char word[30];
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�:");
	gets(word);
	word_delete_space(word);
	return 0;
}

void word_delete_space(char *word)
{
	int i;
	for (i = 0; word[i] != NULL; i++)
	{
		if (word[i] == ' ')
			continue;
		printf("%c", word[i]);
	}
	printf("\n");
}