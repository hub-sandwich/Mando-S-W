
/*
	8.  (x,y)��ǥ�� �Է� �޾Ƽ� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
		(��) x, y��ǥ�� �Է��Ͻÿ�: 10 20
		1��и��Դϴ�.

*/


#include <stdio.h>

int main_3()
{
	int x, y;
	printf("(x,y)��ǥ�� �Է� �Ͻÿ� >> ");
	scanf_s("%d %d", &x, &y);
	
	if (x > 0)
		if (y > 0)
			printf("1��и��Դϴ�.");
		else
			printf("4��и��Դϴ�.");
	else
		if (y > 0)
			printf("2��и��Դϴ�.");
		else
			printf("3��и��Դϴ�.");

	return 0;
}