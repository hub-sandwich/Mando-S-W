
/*
	����ڿ� ��ǻ�Ͱ� �ֻ��� ������ �Ѵٰ� ����.
	�ֻ����� �� 3���� ������ �ֻ��� ������ ���Ѵ�.
	��ģ ������ ���� ���� �̱�ٰ� ����.

*/

#include <stdio.h>
#include <stdlib.h>


int player_dice()
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;
	int total = dice1 + dice2 + dice3;
	printf("����� �ֻ���=(%d,%d,%d)=%d\n",dice1, dice2, dice3, total);
	return total;
}

int computer_dice()
{
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = rand() % 6 + 1;
	int total = dice1 + dice2 + dice3;
	printf("��ǻ�� �ֻ���=(%d,%d,%d)=%d\n",dice1, dice2, dice3, total);
	return total;
}

int main_5()
{
	srand(time(NULL));
	int player = player_dice();
	int com = computer_dice();
	if (player > com)
		printf("����� �¸�");
	else
		printf("��ǻ�� �¸�");
	
	return 0;
}