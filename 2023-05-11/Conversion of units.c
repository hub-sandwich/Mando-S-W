
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
	printf("1. 인치입력  2. cm입력  3. 야드입력 >> ");
	int num1 = inteligent();
	int num2;
	switch (num1)
	{
	case 1:
		printf("1. 인치 -> cm  2. 인치 -> 야드 >> ");
		num2 = inteligent();
		break;
	case 2:
		printf("1. cm -> 인치  2. cm -> 야드 >> ");
		num2 = inteligent();
		break;
	case 3:
		printf("1. 야드 -> 인치  2. 야드 -> cm >>");
		num2 = inteligent();
		break;
	default:
		printf("다시 입력하시오");
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
			printf("인치를 입력하시오 >> ");
			inch = doubleligent();
			cm = inch * 2.54;
			printf("%lf인치는 %lfcm입니다.\n",inch, cm);
			break;
		case 2:
			printf("인치를 입력하시오 >> ");
			inch = doubleligent();
			yard = inch * 0.027778;
			printf("%lf인치는 %lf야드입니다.\n", inch, yard);
			break;
		case 3:
			printf("cm를 입력하시오 >> ");
			cm = doubleligent();
			inch = cm / 2.54;
			printf("%lfcm는 %lf인치입니다.\n", cm, inch);
			break;
		case 4:
			printf("cm를 입력하시오 >> ");
			cm = doubleligent();
			yard = cm * 0.010936;
			printf("%lfcm는 %lf야드입니다.\n", cm, yard);
			break;
		case 5:
			printf("야드를 입력하시오 >> ");
			yard = doubleligent();
			inch = yard / 0.027778;
			printf("%lf야드는 %lf인치입니다.\n", yard, inch);
		case 6:
			printf("야드를 입력하시오 >> ");
			yard = doubleligent();
			cm = yard / 0.010936;
			printf("%lf야드는 %lfcm입니다.\n", yard, cm);
			break;
		}

	}
	return 0;
}








