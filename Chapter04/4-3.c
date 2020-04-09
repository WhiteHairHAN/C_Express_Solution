#include <stdio.h>
int main()
{
	int x = 10;
	int y = 20;
	int tmp;
	printf("x=%d\t", x);
	printf("y=%d\n", y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d\t", x);
	printf("y=%d\n", y);
	return 0;
}