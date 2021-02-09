#include <stdio.h>

// goto

int main()
{
    // 중첩루프를 빠져나올 때, break;로 빠져나올 수도 있지만 goto를 이용하면 간결
    int n;
    scanf("%d", &n);

    if (n == 1)
        goto ONE;
    else if (n == 2)
        goto TWO;
    else
        goto EXIT;
    
    ONE:
        printf("1");
        goto EXIT;
    TWO:
        printf("2");
        goto EXIT;
    EXIT:
        return 0;       
}