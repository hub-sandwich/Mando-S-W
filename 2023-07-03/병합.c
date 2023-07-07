#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50 
void set1_array(int ary[], int size);  // 랜덤값 입력
void sort_array(int ary[], int size);           // 오름차순 정렬
void merge_array(int ary1[], int ary2[], int C_ary[]);              // c값 입력
void print_array(int ary[], int size);          // 출력
int main()
{
	srand((unsigned)time(NULL));
	int a[SIZE];
	int b[SIZE];
	int c[SIZE + SIZE] = { NULL };
	set1_array(a, SIZE);
	set1_array(b, SIZE);

	sort_array(a, SIZE);
	sort_array(b, SIZE);
	print_array(a, SIZE);
	print_array(b, SIZE);
	merge_array(a, b, c);

	return 0;
}

void set1_array(int ary[], int size)
{
	for (int i = 0; i < size; i++)
	{
		ary[i] = rand() % 100;
	}
}

void sort_array(int ary[], int size)
{
	int temp, i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1) - i; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void print_array(int ary[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n\n");
}

void merge_array(int ary1[], int ary2[], int C_ary[])
{
	int i;
	int index_a = 0, index_b = 0;


	for (i = 0; i < (SIZE + SIZE); i++)
	{
		if (index_a == 50 || index_b == 50)
			break;

		if (ary1[index_a] < ary2[index_b])
		{
			C_ary[i] = ary1[index_a++];
		}
		else
		{
			C_ary[i] = ary2[index_b++];
		}
		printf("%d\t", C_ary[i]);
	}

	
		for (i; i < (SIZE + SIZE); i++)
		{
			if (index_a == 50)
			{
				C_ary[i] = ary2[index_b++];
			}
			else if (index_b == 50)
			{
				C_ary[i] = ary1[index_a++];
			}
			printf("%d\t", C_ary[i]);
		}
	}