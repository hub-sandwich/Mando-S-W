
/*
	(1) ����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	printf("���� �Է� >> ");
	scanf("%d", &num);
	
	while (i < num)
	{
		i++;
		if (num % i != 0)
			continue;
		
		printf("%d ", i);
	}

	return 0;
}