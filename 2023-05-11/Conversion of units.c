
#include <stdio.h>

int inteligent()
{
	int num;
	scanf_s("%d", &num);
	return num;
}

double doubleligent()
{
	double num;
	scanf_s("%lf", &num);
	return num;
}

int menu()
{
	printf("1. ��ġ�Է�  2. cm�Է�  3. �ߵ��Է� >> ");
	int num1 = inteligent();
	int num2;
	switch (num1)
	{
	case 1:
		printf("1. ��ġ -> cm  2. ��ġ -> �ߵ� >> ");
		num2 = inteligent();
		break;
	case 2:
		printf("1. cm -> ��ġ  2. cm -> �ߵ� >> ");
		num2 = inteligent();
		break;
	case 3:
		printf("1. �ߵ� -> ��ġ  2. �ߵ� -> cm >>");
		num2 = inteligent();
		break;
	default:
		printf("�ٽ� �Է��Ͻÿ�");
	}

	if (num1 == 1 && num2 == 1)
		return 1;
	if (num1 == 1 && num2 == 2)
		return 2;
	if (num1 == 2 && num2 == 1)
		return 3;
	if (num1 == 2 && num2 == 2)
		return 4;
	if (num1 == 3 && num2 == 1)
		return 5;
	if (num1 == 3 && num2 == 2)
		return 6;
}

int main()
{
	while (1)
	{
		double inch, cm, yard;
		int num = menu();
		switch (num)
		{
		case 1:
			printf("��ġ�� �Է��Ͻÿ� >> ");
			inch = doubleligent();
			cm = inch * 2.54;
			printf("%lf��ġ�� %lfcm�Դϴ�.\n",inch, cm);
			break;
		case 2:
			printf("��ġ�� �Է��Ͻÿ� >> ");
			inch = doubleligent();
			yard = inch * 0.027778;
			printf("%lf��ġ�� %lf�ߵ��Դϴ�.\n", inch, yard);
			break;
		case 3:
			printf("cm�� �Է��Ͻÿ� >> ");
			cm = doubleligent();
			inch = cm / 2.54;
			printf("%lfcm�� %lf��ġ�Դϴ�.\n", cm, inch);
			break;
		case 4:
			printf("cm�� �Է��Ͻÿ� >> ");
			cm = doubleligent();
			yard = cm * 0.010936;
			printf("%lfcm�� %lf�ߵ��Դϴ�.\n", cm, yard);
			break;
		case 5:
			printf("�ߵ带 �Է��Ͻÿ� >> ");
			yard = doubleligent();
			inch = yard / 0.027778;
			printf("%lf�ߵ�� %lf��ġ�Դϴ�.\n", yard, inch);
		case 6:
			printf("�ߵ带 �Է��Ͻÿ� >> ");
			yard = doubleligent();
			cm = yard / 0.010936;
			printf("%lf�ߵ�� %lfcm�Դϴ�.\n", yard, cm);
			break;
		}

	}
	return 0;
}








