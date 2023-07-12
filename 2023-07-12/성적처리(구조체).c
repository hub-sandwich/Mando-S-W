#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIDDLE_TEST 50
#define LAST_TEST 30
#define WORK 20
#define STUDENT 20
#define NAME_SIZE 3
void rand_score(struct student* stu);
void print_grade(struct student* stu);
void set_grade(struct student* stu);

struct student
{
	char name[NAME_SIZE];
	int middle;
	int last;
	int work;
	int sum;
	int rank;
};

int main()
{
	srand((unsigned)time(NULL));
	struct student stu[STUDENT];

	rand_score(stu);
	set_grade(stu);
	print_grade(stu);
	return 0;
}

void rand_score(struct student* stu)
{

	for (int i = 0; i < STUDENT; i++)
	{
		for (int j = 0; j < NAME_SIZE; j++)
		{
			stu[i].name[j] = rand() % 26 + 65;
		}
		stu[i].middle = rand() % MIDDLE_TEST + 1;
		stu[i].last = rand() % LAST_TEST + 1;
		stu[i].work = rand() % WORK + 1;
		stu[i].sum = stu[i].middle + stu[i].last + stu[i].work;
	}
}

void print_grade(struct student* stu)
{
	for (int i = 0; i < STUDENT; i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\t",stu[i].name, stu[i].middle, stu[i].last , stu[i].work, stu[i].sum, stu[i].rank);
		printf("\n");
	}
}

void set_grade(struct student *stu)
{
	int grade = 1;
	int temp = 0, count = 0;
	int i, j;
	int sort[STUDENT];

	for (i = 0; i < STUDENT; i++)
	{
		sort[i] = stu[i].sum;
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
			if (stu[j].sum == sort[i])
			{
				count++;
				stu[j].rank = grade;
			}
		}
		grade++;
	}
}