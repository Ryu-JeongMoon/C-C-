#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2;

    n2 = (n1 == 5) ? 100 : 200; // 삼항 연산자 사용시, 조건을 괄호로 묶어주기

    printf("%d", n2);

    return 0;
}