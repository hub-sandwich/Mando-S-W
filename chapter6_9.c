
/*
	9번 다음과 같이 정의되는 함수의 함수값을 계산하여보자.
	사용자로부터 x값을 받아서 함수값을 계산하여 화면에 출력한다. x는 실수이다.
		
		f(x)= {x^2−9x+2    x≤0
			  {    7x+2    x>0


*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, answer;
	printf("x의 값을 입력하시오 : ");
	scanf_s("%lf", &x);
	
	if (x <= 0)
		answer = x * x - 9 * x + 2;
	else
		answer = 7 * x + 2;

	printf("f(x)의 값은 %.2lf 입니다.", answer);

	return 0;
}
