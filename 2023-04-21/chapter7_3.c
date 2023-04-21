
/*
	​(3) 다음 수학식을 계산하는 코드를 작성하라

  1.
	 30
	 ∑(i^2+1)
 	 i=1

  2.
	 30    5
	 ∑	  ∑(i+j)​​
	i=10 j=0	

*/

#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 1; i <= 30; i++)     // 1.
	{
			sum += i *= +1;
	}

	printf("%d ", sum);
	sum = 0;

	for (int i = 10; i <= 30; i++)    // 2.
	{
		for (int j = 0; j <= 5; j++)
		{
			sum += (i + j);
		}
	}

	printf("%d", sum);
	return 0;
}