
/*
	9. 다음 프로그램은 무엇을 하는 프로그램인가? 예를 들어 출력 결과는 어떻게 되는가?
       0이 입력되기 전까지의 모든 수를 더해 출력하는 프로그램.  
       예시) 정수 입력 : 1
             정수 입력 : 2
             정수 입력 : 3
             정수 입력 : 4
             정수 입력 : 0

       출력) total = 10

*/

#include <stdio.h>

int main_4(void)

{

    int num, tot = 0;

    do {                    

        printf("정수 입력 : ");

        scanf_s("%d", &num);

        tot += num;

    } while (num != 0);

    printf("total = %d\n", tot);        

    return 0;
}

