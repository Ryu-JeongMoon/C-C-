#include <stdio.h>
#include <stdbool.h>

int main()
{
    // goto는 에러처리할 때 유용, 중복되는 코드를 줄일 수 있음
    int gender;
    int age;
    int isOwner;
    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("안녕하세요\n");
    printf("Hello\n");

    if (gender == 2)
    {
        goto EXIT;
    }
    if (age < 30 || age > 40)
    {
        goto EXIT;
    }
    if (isOwner == false)
    {
        goto EXIT;
    }
EXIT:
        printf("안녕히계세요\n");
        printf("Bye\n");
    return 0;
}