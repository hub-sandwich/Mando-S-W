
/*
	사용자와 컴퓨터가 주사위 게임을 한다고 하자.
	주사위를 각 3번씩 굴려서 주사위 점수를 합한다.
	합친 점수가 높은 쪽이 이긴다고 하자.

*/

#include <stdio.h>
#include <stdlib.h>


int player_dice()
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;
	int total = dice1 + dice2 + dice3;
	printf("사용자 주사위=(%d,%d,%d)=%d\n",dice1, dice2, dice3, total);
	return total;
}

int computer_dice()
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;
	int total = dice1 + dice2 + dice3;
	printf("컴퓨터 주사위=(%d,%d,%d)=%d\n",dice1, dice2, dice3, total);
	return total;
}

int main_5()
{
	srand(time(NULL));
	int player = player_dice();
	int com = computer_dice();
	if (player > com)
		printf("사용자 승리");
	else
		printf("컴퓨터 승리");
	
	return 0;
}