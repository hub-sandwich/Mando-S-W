
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIDDLE_TEST 50
#define LAST_TEST 30
#define WORK 20
#define STUDENT 20
void rand_score(int ary[][5]);
void print_grade(int ary[][5]);
void set_grade(int ary[][5]);

int main()
{
	srand((unsigned)time(NULL));
	int stu[STUDENT][5] = {NULL};
	
	rand_score(stu);
	set_grade(stu);
	print_grade(stu);
	return 0;
}

void rand_score(int ary[][5])
{

	for (int i = 0; i < STUDENT; i++)
	{
		ary[i][0] = rand() % MIDDLE_TEST + 1;
		ary[i][1] = rand() % LAST_TEST + 1;
		ary[i][2] = rand() % WORK + 1;
		ary[i][3] = ary[i][0] + ary[i][1] + ary[i][2];
	}
}

void print_grade(int ary[][5])
{
	for (int i = 0; i < STUDENT; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", ary[i][j]);
		}
		printf("\n");
	}
}

void set_grade(int ary[][5])
{
	int grade = 1;
	int temp = 0, count = 0;
	int i, j;
	int sort[STUDENT];

	for (i = 0; i < STUDENT; i++)
	{
		sort[i] = ary[i][3];
	}

	for (i = 0; i < STUDENT; i++)
	{
		for (j = 0; j < (STUDENT - 1) - i; j++)
		{
			if (sort[j] < sort[j + 1])
			{
				temp = sort[j + 1];
				sort[j + 1] = sort[j];
				sort[j] = temp;
			}
		}
	}

	for (i = 0; i < STUDENT; i++)                     // 동점시 같은 순위로 인정한다.
	{
		for (j = 0; j < STUDENT; j++)
		{
			if (ary[j][3] == sort[i])
			{
				count++;
				ary[j][4] = grade;
			}
		}
		grade++;
	}
}