
#include <stdio.h>

int inteligent()
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void primeNumber(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d�� �Ҽ��� �ƴմϴ�.", num);
			break;

		}
		else
			if(i == num)
			printf("%d�� �Ҽ��Դϴ�.", num);
	}
}

int main_1()
{
	printf("���� �Է�(1 ~ 100 ");
	int num = inteligent();
	primeNumber(num);

	return 0;
}