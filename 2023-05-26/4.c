
/*
	���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha(char c)�� �ۼ��ϰ�
	�̰��� ȣ���Ͽ� ����ڰ� �Է��� ���ڰ� ���ĺ�('a' ���� 'z'����)������ �Ǵ��Ͽ� ����ϴ� ���α׷��� �ۼ��϶�.
*/

#include <stdio.h>


void check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		printf("%c�� ���ĺ� �����Դϴ�. ", c);
}

int main_2()
{
	char word;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &word);
	check_alpha(word);
	return 0;
}