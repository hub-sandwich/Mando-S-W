
/*
	10에서 90까지의 정수를 무작위로 반환환하는 함수 randint()를 작성하고 10번 호출하여보자.

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