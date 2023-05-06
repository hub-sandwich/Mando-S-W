
/*
	11. 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.(5점)
		(예) 정수를 입력하시오 : 20
		     약수 : 1, 2, 4, 5, 10, 20

*/


#include <stdio.h>

int main_11()
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("약수 : ");
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