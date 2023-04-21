
/*
	(1) 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	printf("정수 입력 >> ");
	scanf("%d", &num);
	
	while (i < num)
	{
		i++;
		if (num % i != 0)
			continue;
		
		printf("%d ", i);
	}

	return 0;
}