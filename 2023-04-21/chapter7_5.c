
/*
	(5) ����ڰ� �Է��� Ư���� ������ �ڸ����� �ݴ�� ����ϴ� ���α׷��� �ۼ��϶�. 
		���� �� ����ڰ� ���� 1206�� �Է��Ͽ��ٸ� 6021�� ��µǾ�� �Ѵ�.
		do~while���� ����Ͽ� ����.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("���� �Է� >> ");
	scanf("%d", &num);

	do
	{
		printf("%d", num % 10);
		num /= 10;
	} while (num > 0);

	return 0;
}