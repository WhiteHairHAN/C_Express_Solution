#include<stdio.h>
int main()
{
	float seta, meter, leath;
	double r;
	
	printf("�ÿ��׿��� �˷���帮�Ʊ����� �Ÿ��� �Է��ϼ��� (km):");
	scanf("%f", &meter);
	printf("����� �׸��ڰ� �̷�� ������ �Է��ϼ��� :");
	scanf("%f", &seta);
	leath = (meter * 360) / seta;
	r = leath / (2 * 3.141592);

	printf("������ �������� %lf �Դϴ�.\n", r);
	
}