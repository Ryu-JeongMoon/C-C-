#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);

    while (i - 1200 >= 0)
    {
        printf("%d\n", i-1200);
        i -= 1200;
    }
    return 0;
}
