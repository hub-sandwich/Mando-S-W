
/*
	10. 다음 프로그램의 출력 결과는?

    ① i는 0부터 10까지 +2씩 증가하므로
        프로그램을 다섯번 돌리면서 출력한다
        출력: 0
              2
              4
              6
              8

    ②  0x10는  0001 0000(10)
        시프트연산한만큼 출력한다
        출력: hellohellohellohellohello

    ③ x는 0부터 3까지 +1씩 증가하고
       y는 2부터 0까지를 포함하여 -1씩 감소한다
       따라서 프로그램 9번을 돌려 수행하여 출력한다
       출력: *********

*/


#include <stdio.h>

void exam10_1()
{
    for(int i = 0; i < 10; i += 2)
     printf("%d\n", i);
}

void exam10_2()
{
    int i = 0x10;

    for (; i; i >>= 1)
     printf("hello");
}

void exam10_3()
{
    int x, y;

    for (x = 0; x < 3; x++)
        for (y = 2; y >= 0; y--)
            printf("*");
}

int main_10()
{   
    exam10_1();
    printf("\n");
    exam10_2();
    printf("\n\n");
    exam10_3();

    return 0;
}





