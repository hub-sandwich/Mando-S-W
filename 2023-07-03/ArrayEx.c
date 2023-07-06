
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50 
void set1_array(int ary[], int size);  // ������ �Է�
void sort_array(int ary[], int size);           // �������� ����
void C_array(int ary1[], int ary2[], int C_ary[]);              // c�� �Է�
void print_array(int ary[], int size);          // ���
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
	print_array(a,  SIZE);
	print_array(b,  SIZE);
	C_array(a, b, c);
	
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

void C_array(int ary1[], int ary2[], int C_ary[])
{
	int i, j;
	int count_a = 0, count_b = 0;
	for (i = 0; i < 10; i++)
	{
		if (C_ary[49] == NULL)
		{
			if(ary1[i] > ary2[i])
			{
				for (j = count_b; j < i; j++)
				{
					C_ary[i] = ary2[i];
					count_b++;
				}
			}
			else
			{;
				for (j = count_a; j < i; j++)
				{
					C_ary[i] = ary1[i];
					count_a++;
				}
			}
			printf("%d\t", C_ary[i]);
		}
		else
			C_ary[i] = (ary1[i - SIZE] > ary2[i - SIZE]) ? ary2[i - SIZE] : ary1[i - SIZE];
	}
	printf("\n\n");
}

















