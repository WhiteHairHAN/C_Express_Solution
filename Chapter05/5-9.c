#include<stdio.h>
int main()
{
	float AC, AE, BC, DE;
	
	printf("AC�� �Է��ϼ��� :");
	scanf("%f", &AC);
	printf("AE�� �Է��ϼ��� :");
	scanf("%f", &AE);
	printf("BC�� �Է��ϼ��� :");
	scanf("%f", &BC);

	DE = (AE*BC) / AC;
	printf("DE�� ���̴� %f �Դϴ�.\n", DE);

}