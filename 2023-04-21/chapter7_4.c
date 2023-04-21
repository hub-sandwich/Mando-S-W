
/*
	(4) 피보나치 수열은 다음과 같이 정의되는 수열이다.

	$f0 = 0
	$f1 = 1
	$fi + 1 = fi + fi - 1(for  i = 1,2,..)​
	피보나차 수열에서는 앞의 2개의 원소를 합하여 뒤의 원수를 만든다. 
	피보나치 수열은 컴퓨터에서도 탐색문제 등에 사용되기도 한다. 
	피보나치 수열을 생성하여 출력하는 프로그램을 작성하여 보자

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	int temp;
	unsigned int num;
	printf("n번항 까지 출력 >> ");
	scanf("%d", &num);

	printf("%d ", a);
	for (int i = a; i < num - 1; i++)
	{
		temp = a + b;
		b = a;
		a = temp;
		printf("%d ", temp);
	}

	return 0;
}