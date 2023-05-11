
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
			printf("%d는 소수가 아닙니다.", num);
			break;

		}
		else
			if(i == num)
			printf("%d는 소수입니다.", num);
	}
}

int main_1()
{
	printf("정수 입력(1 ~ 100 ");
	int num = inteligent();
	primeNumber(num);

	return 0;
}