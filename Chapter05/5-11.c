#include<stdio.h>
int main()
{
	float seta, meter, leath;
	double r;
	
	printf("시에네에서 알렉산드리아까지의 거리를 입력하세요 (km):");
	scanf("%f", &meter);
	printf("막대와 그림자가 이루는 각도를 입력하세요 :");
	scanf("%f", &seta);
	leath = (meter * 360) / seta;
	r = leath / (2 * 3.141592);

	printf("지구의 반지름은 %lf 입니다.\n", r);
	
}