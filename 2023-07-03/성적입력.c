
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT 20
#define SCORE 5
#define	WORK 20
#define TEST1 50
#define TEST2 30

void input_Score(int ary[STUDENT][SCORE])
{
	for (int i = 0; i < STUDENT; i++)
	{
		ary[i][0] = rand() % TEST1 +1;
		ary[i][1] = rand() % TEST2 +1;
		ary[i][2] = rand() % WORK +1;
		ary[i][3] = ary[i][0] + ary[i][1] + ary[i][2];
	}
}

void record(int ary[STUDENT][SCORE])
{
	int array[STUDENT];
	int i, j, temp, large;

	for (i = 0; i < STUDENT; i++)
	{
		array[i] = ary[i][3];
	}

	for (i = 0; i < STUDENT - 1; i++)
	{
		large = i;
		for (j = i + 1; j < STUDENT; j++)
			if (array[j] > array[large])
				large = j;
		temp = array[i];
		array[i] = array[large];
		array[large] = temp;
	}
	
	temp = 1;
	
	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < STUDENT; j++)
		{
			if (array[i] == ary[j][3])
			{	
				ary[j][4] = temp;
				temp++;
				break;
			}
		}
	}
	
}

void print_record(int ary[STUDENT][SCORE])
{
	for (int i = 0; i < STUDENT; i++)
	{
		for (int j = 0; j < SCORE; j++)
		{
			printf("%d\t", ary[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int ary[STUDENT][SCORE] = { 0 };
	input_Score(ary);
	record(ary);
	print_record(ary);
	return 0;
}