
/*
	10���� 90������ ������ �������� ��ȯȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͽ�����.

*/

#include <stdio.h>
#include <stdlib.h>

void randint()
{
	printf("%d ", rand() % 81 + 10);
}

int main_4()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		randint();

	return 0;
}