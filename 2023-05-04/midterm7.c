
/*
	7. ����ڷκ��� 3���� ������ �о� ���� �Ŀ� if-else���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�.

*/


#include <stdio.h>

int main_2()
{
	int a, b, c, min;
	printf("���� 3���� �Է��Ͻÿ� >> ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a > b)
		min = b;
	else
		min = a;

	if (min > c)
		min = c;

	printf("���� ���� ���� >> %d", min);
	return 0;
}
