#include<stdio.h>
int main()
{
	char ch;
	printf("문자를 입력하시오:");
	scanf("%c", &ch);

	if (ch == 'a' ) 
		printf("\n모음입니다.\n");
	else if (ch == 'e')
		printf("\n모음입니다.\n");
	else if (ch == 'i')
		printf("\n모음입니다.\n");
	else if (ch == 'o')
		printf("\n모음입니다.\n");
	else if (ch == 'u')
		printf("\n모음입니다.\n");
	else
		printf("자음입니다.\n");
}

// swich 문으로 제작가능