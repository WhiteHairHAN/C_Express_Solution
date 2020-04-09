#include <stdio.h>
int main()
{
	double mass, value;
	double kenergy;

	printf("질량 : ");
	scanf("%lf", &mass);
	printf("속도 : ");
	scanf("%lf", &value); // 큰 따옴표 안에 "%lf " 한칸띄어쓰면 출력할때 한번더 엔터를 쳐야하므로 "%lf" 붙여서 써야된다.
	
	kenergy = mass * value * value * 0.5;
	printf("%lf" ,kenergy);
	return 0;
}