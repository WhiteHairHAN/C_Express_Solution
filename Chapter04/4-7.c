#include <stdio.h>
int main()
{
	double mass, value;
	double kenergy;

	printf("���� : ");
	scanf("%lf", &mass);
	printf("�ӵ� : ");
	scanf("%lf", &value); // ū ����ǥ �ȿ� "%lf " ��ĭ���� ����Ҷ� �ѹ��� ���͸� �ľ��ϹǷ� "%lf" �ٿ��� ��ߵȴ�.
	
	kenergy = mass * value * value * 0.5;
	printf("%lf" ,kenergy);
	return 0;
}