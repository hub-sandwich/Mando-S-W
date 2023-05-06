
/*
	3. 다음 프로그램의 출력은?

    ① 0x20은            0010 0000(20)
       시프트 연산으로   1000 0000(80)
       출력 : 80

    ② (a == 100)은 참, (b > 200)은 거짓.
        논리연산 1 || 0
        출력 : 1
*/


#include <stdio.h>

void exam3_1()                                     
{                                                
    printf("%x\n", 0x20 << 2);                   
}

void exam3_2()                                  
{                                               
    int a = 100, b = 200, c;

    c = (a == 100 || b > 200);
    printf("%d\n", c);
}


int main_1()
{
    exam3_1();
    exam3_2();
    return 0;
}