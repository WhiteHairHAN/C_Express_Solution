#include <stdio.h>
void main()// ������� ���� ���ٹۿ�����
{
	int i, j;
	for (i = 2; i <= 100; i++) // 1���� 100���� ���� ���ؾߵ�
	{
		for (j = 2; j < i; j++) // ����� 1�� �ڱ��ڽ��� �����ߵ�
		{
			if (i % j == 0) //����;
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
}