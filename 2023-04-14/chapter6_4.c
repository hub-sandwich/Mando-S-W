
/*
	4�� ��ǻ�Ϳ� ����,����,�� ������ �ϴ� ���α׷��� �ۼ��϶�. 
	��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ����, ����, �� �߿��� ���Ƿ� �ϳ��� �����Ѵ�. 
	����ڴ� ���α׷��� �Է� �ȳ� �޽����� ����, 3�� �߿��� �ϳ��� �����ϰ� �ȴ�. 
	������� ������ ������ ��ǻ�ʹ� ���� ������ �����Ͽ��� ���� �̰����, ������ �˷��ش�.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
 
	int bot = rand() % 4 + 1;
	int user;

	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ�:  ");
	scanf_s("%d", &user);
	
	switch(bot)
	{
	case 1:
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n\n");
		switch (user)
		{
		case 1:
			printf("�����ϴ�.");
			break;
		case 2:
			printf("����ڰ� �̰���ϴ�.");
			break;
		case 3:
			printf("����ڰ� �����ϴ�.");
			break;
		}
		break;
	case 2:
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n\n");
		switch (user)
		{
		case 1:
			printf("����ڰ� �����ϴ�.");
			break;
		case 2:
			printf("�����ϴ�.");
			break;
		case 3:
			printf("����ڰ� �̰���ϴ�.");
			break;
		}
		break;
	case 3:
		printf("��ǻ�ʹ� ���� �����Ͽ����ϴ�.\n\n");
		switch (user)
		{
		case 1:
			printf("����ڰ� �̰���ϴ�.");
			break;
		case 2:
			printf("����ڰ� �����ϴ�.");
			break;
		case 3:
			printf("�����ϴ�.");
			break;
		}
		break;
	}

	return 0;
}