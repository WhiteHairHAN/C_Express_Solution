#include<stdio.h> // ����� ���� ��
int main()
{
	int a = 0, b = 0, c = 0;

	printf("ī������ �ʱ갪�� �Է��Ͻÿ�:");
	scanf("%d", &a);

	for (b = a; b>0; b--)
	{
		printf("%d ", b);
		for (c = 0; c<2e+8; c++) //ī��Ʈ�ϴ� ���̸� ������Ű�� ����
		{
			NULL;
		}
	}
	printf("\n\a");
	return 0;
}