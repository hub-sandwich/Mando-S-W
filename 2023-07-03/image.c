
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
	int* p = NULL;
	int r, c;
	int count = 0;
	int input = 0;
	while()
	{
		 r = rand() % 5;
		 c = rand() % 5;
		 p = &ary[r][c];
		 if (input)
		 {
			 *p = input;
			 input++;
		 }
		 count++;
	}
	printf("¹Ýº¹ È½¼ö : %d\n", count);
}















