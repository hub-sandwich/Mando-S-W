#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void print_images(int ary[][SIZE], int size);
void brighten_images(int ary[][SIZE], int size);
void rand_images(int ary[][SIZE]);

int main()
{
	srand((unsigned)time(NULL));

	int images[5][5] = { {10,20,30,40,50},
						 {10,20,30,40,50},
						 {10,20,30,40,50},
						 {10,20,30,40,50},
						 {10,20,30,40,50} };

	int size = sizeof(images) / sizeof(images[0]);
	print_images(images, size);
	rand_images(images);
	print_images(images, size);
	return 0;
}

void print_images(int ary[][SIZE], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void brighten_images(int ary[][SIZE], int size)
{
	int i, j;
	int* p = ary;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == 4)
				*p = 0;
			else
				*p = -1;

			p++;
		}
	}
}

void rand_images(int ary[][SIZE])
{
	int r, c;
	int(*p)[5] = ary;
	int count = 0;
	int input = 0;
	
	for (r = 0; r < 5; r++)
	{
		for (c = 0; c < 5; c++)
		{
			p[r][c] = NULL;
		}
	}

	while (input != 25)
	{
		r = rand() % 5;
		c = rand() % 5;
		if (p[r][c] == NULL)
		{
			p[r][c] = input;
			input++;
		}
		count++;
	}

	printf("¹Ýº¹ È½¼ö : %d\n", count);
}