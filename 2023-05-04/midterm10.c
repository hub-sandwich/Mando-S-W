
/*
	10. ���� ���α׷��� ��� �����?

    �� i�� 0���� 10���� +2�� �����ϹǷ�
        ���α׷��� �ټ��� �����鼭 ����Ѵ�
        ���: 0
              2
              4
              6
              8

    ��  0x10��  0001 0000(10)
        ����Ʈ�����Ѹ�ŭ ����Ѵ�
        ���: hellohellohellohellohello

    �� x�� 0���� 3���� +1�� �����ϰ�
       y�� 2���� 0������ �����Ͽ� -1�� �����Ѵ�
       ���� ���α׷� 9���� ���� �����Ͽ� ����Ѵ�
       ���: *********

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





