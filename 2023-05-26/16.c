
/*
	���࿡ ��ġ�Ǿ� �ִ� ATM ��ġ�� ���α׷����� �����غ���.
	�����ϴٸ� �ҽ��� ���� �κ��� �Լ��� �����غ���.

*/

#include <stdio.h>

int money = 0;

void menu()
{
	printf("\n********** Welcome to Express ATM **********\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
}

void show_money()
{
	printf("���� �ܾ� : %d\n", money);
}

void input_money()
{
	int cost;
	printf("�Ա� �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &cost);
	money += cost;
	printf("���� �ܾ� : %d\n", money);
}

void output_money()
{
	int cost;
	printf("���� �ܾ� : %d\n", money);
	printf("��� �ݾ��� �Է��Ͻÿ� : ");
	scanf_s("%d", &cost);
	if (cost > money)
	{
		printf("�ٽ� �Է��Ͻÿ�.\n");
	}
	else
	money -= cost;
	printf("���� �ܾ� : %d\n", money);
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
		printf("�޴��� �����Ͻÿ� : ");
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
			printf("�ٽ��Է��Ͻÿ�.\n");
		}
	}

	return 0;
}