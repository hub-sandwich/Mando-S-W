
/*
	11. ����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.(5��)
		(��) ������ �Է��Ͻÿ� : 20
		     ��� : 1, 2, 4, 5, 10, 20

*/


#include <stdio.h>

int main_11()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("��� : ");
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			if (i == num)
			{
				printf("%d", i);
				break;
			}
			
			printf("%d, ", i);
		}
	}

	return 0;
}