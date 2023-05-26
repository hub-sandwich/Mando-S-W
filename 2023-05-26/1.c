
/*
	������ ���� �Լ����� �ۼ��ϰ�, ������ ���� �Է¹޾� �׽�Ʈ�غ���.

	(a) �־��� ������ ¦���̸� 1�� ��ȯ�ϰ� Ȧ���̸� 0�� ��ȯ�ϴ� �Լ� int even(int n)
	(b) �־��� ������ ���밪�� ���ϴ� �Լ� int absolute(int n)
	(c) �־��� ������ �����̸� -1��, ����̸� 1�� 0�̸� 0�� ��ȯ�ϴ� �Լ� int sign(int n)

*/

#include <stdio.h>

int even(int n)
{
	if (n & 1 == 1)
		return 0;
	else
		return 1;
}

int absolute(int n)
{
	if (n > 0)
		return n;
	else
		return -n;
}

int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n == 0)
		return 0;
	else
		return -1;
}

int main_1()
{
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	printf("even()�� ��� : %d\n", even(num));
	printf("absolute()�� ��� : %d\n", absolute(num));
	printf("sign()�� ��� : %d\n", sign(num));
	return 0;
}