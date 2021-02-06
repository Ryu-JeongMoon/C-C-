#include <stdio.h>

int main()
{
    int balance = 10000;    // 교통카드 잔액
    int age;

    scanf("%d", &age);
    
    if (age >= 7 && age <= 12)
    {
        balance = balance - 450;
    }
    else if (age >= 13 && age <= 18)
    {
        balance = balance - 720;
    }
    else if (age >= 19)
    {
        balance = balance - 1200;
    }
    printf("%d\n", balance);

    return 0;
}