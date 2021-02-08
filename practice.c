#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 반복 횟수가 정해져 있지 않을때
    srand(time(NULL));

    int i = 0;
    while (i != 5)
    {
        i = rand() % 10;
        printf("%d\n", i);
    }
    return 0;
}