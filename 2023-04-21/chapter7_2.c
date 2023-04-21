
/*
	​(2) 2와 100사이에 있는 모든 소수(prime number)를 찾는 프로그램을 작성하라. 

*/

#include <stdio.h>

int main()
{
	int count = 0;

	for (int i = 2; i < 100; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
		}
		count = 0;
	}

	return 0;
}