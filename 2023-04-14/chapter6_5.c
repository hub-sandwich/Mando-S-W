
/*
	5�� ���̰������� �ѷ��ڽ��Ϳ� Ÿ���� Ű�� 140cm�̻��̰�, ���̰� 10�� �̻��̾�� �Ѵٰ� ��������.
	����ڿ��� Ű�� ���̸� ������ �Ŀ� "Ÿ�� �����ϴ�" �Ǵ� "�˼��մϴ�"�� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age, height;
	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &height);
	printf("���̸� �Է��Ͻÿ�: ");
	scanf_s("%d", &age);

	(height >= 140 && age >= 10) ? printf("Ÿ�� �����ϴ�") : printf("�˼��մϴ�");

	return 0;
}