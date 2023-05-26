
/*
	은행에 설치되어 있는 ATM 장치를 프로그램으로 구현해보자.
	가능하다면 소스의 많은 부분을 함수로 구현해본다.

*/

#include <stdio.h>

int money = 0;

void menu()
{
	printf("\n********** Welcome to Express ATM **********\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
}

void show_money()
{
	printf("현재 잔액 : %d\n", money);
}

void input_money()
{
	int cost;
	printf("입금 금액을 입력하시오 : ");
	scanf_s("%d", &cost);
	money += cost;
	printf("현재 잔액 : %d\n", money);
}

void output_money()
{
	int cost;
	printf("현재 잔액 : %d\n", money);
	printf("출금 금액을 입력하시오 : ");
	scanf_s("%d", &cost);
	if (cost > money)
	{
		printf("다시 입력하시오.\n");
	}
	else
	money -= cost;
	printf("현재 잔액 : %d\n", money);
}

void exid()
{
	exid(0);
}

int main_6()
{
	while (1)
	{
		menu();
		int num;
		printf("메뉴를 선택하시오 : ");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			show_money();
			break;
		case 2:
			input_money();
			break;
		case 3:
			output_money();
			break;
		case 4:
			exid();
			break;
		default:
			printf("다시입력하시오.\n");
		}
	}

	return 0;
}