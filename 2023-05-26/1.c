
/*
	다음과 같은 함수들을 작성하고, 임의의 값을 입력받아 테스트해보자.

	(a) 주어진 정수가 짝수이면 1을 반환하고 홀수이면 0을 반환하는 함수 int even(int n)
	(b) 주어진 정수의 절대값을 구하는 함수 int absolute(int n)
	(c) 주어진 정수가 음수이면 -1을, 양수이면 1을 0이면 0을 반환하는 함수 int sign(int n)

*/

#include <stdio.h>

int even(int n)
{
	if (n & 1 == 1)
		return 0;
	else
		return 1;
}

int absolute(int n)
{
	if (n > 0)
		return n;
	else
		return -n;
}

int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}

int main_1()
{
	int num;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	printf("even()의 결과 : %d\n", even(num));
	printf("absolute()의 결과 : %d\n", absolute(num));
	printf("sign()의 결과 : %d\n", sign(num));
	return 0;
}