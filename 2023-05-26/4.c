
/*
	전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha(char c)를 작성하고
	이것을 호출하여 사용자가 입력한 문자가 알파벳('a' 에서 'z'까지)인지를 판단하여 출력하는 프로그램을 작성하라.
*/

#include <stdio.h>


void check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		printf("%c는 알파벳 문자입니다. ", c);
}

int main_2()
{
	char word;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &word);
	check_alpha(word);
	return 0;
}