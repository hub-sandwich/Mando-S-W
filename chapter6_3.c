
/*
	3�� ����ڷκ��� 3�� ������ �о� ���� �Ŀ� 
	if - else���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, min;
	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
			min = c;
		else
			min = b;

	}
	else 
	{
		if (a > c)
			min = c;
		else
			min = a;
	}

	printf("���� ���� ������ %d�Դϴ�.", min);

	return 0;
}