
/*
	월급에 붙는 소득세를 계산하는 함수 get_tax(int income)를 작성하고 테스트하여 보자.
	소득 중 1,000만 원까지는 8%를 적용하고 1,000만 원이 넘는 소득은 10%를 과세한다고 하자.
	소득 중에서 1,000만 원을 넘는 부분만 10%가 적용된다.
	사용자로부터 소득을 받아서 세금을 계산하는 프로그램을 작성하라.

*/

#include <stdio.h>

void get_tax(int income)
{
	int cost;

	cost = income % 1000 * 0.08;
	cost += income / 1000 * 1000 * 0.1;

	printf("소득세는 %d만원입니다.", cost);
}

int main_3()
{
	int pay;
	printf("소득을 입력하시오(만원): ");
	scanf_s("%d", &pay);
	get_tax(pay);

	return 0;
}