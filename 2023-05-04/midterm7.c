
/*
	7. 사용자로부터 3개의 정수를 읽어 들인 후에 if-else문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라.

*/


#include <stdio.h>

int main_2()
{
	int a, b, c, min;
	printf("정수 3개를 입력하시오 >> ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a > b)
		min = b;
	else
		min = a;

	if (min > c)
		min = c;

	printf("가장 작은 정수 >> %d", min);
	return 0;
}
