#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void)
{
	void get_dice_face(void);
	int i;
	srand((unsigned int)time(NULL));
	for (i = 1; i <= 10000; i++)
	{
		get_dice_face();
	}
}

void get_dice_face(void)
{
	static int count = 0;
	static int f1 = 0;
	static int f2 = 0;
	static int f3 = 0;
	static int f4 = 0;
	static int f5 = 0;
	static int f6 = 0;

	int n = rand() % 6;
	if (n == 0)
		f1++;
	if (n == 1)
		f2++;
	if (n == 2)
		f3++;
	if (n == 3)
		f4++;
	if (n == 4)
		f5++;
	if (n == 5)
		f6++;
	count++;
	if (count % 100)
		printf("%d %d %d %d %d %d\n", f1, f2, f3, f4, f5, f6);
}