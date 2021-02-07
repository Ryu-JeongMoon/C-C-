#include <stdio.h>

/* bit operator
& and / | or / ^ exclusive or / ~ not / << shift to left / 
>> shift to right / &= allocating after and / |= allocating after or /
^= allocating after xor / <<= / >>= allocating after shift */


int main()
{
    int n = 8;
    int n1 = 720;
    printf("%d\n", n & n1);
    printf("%d\n", n | n1);
    printf("%d\n", n ^ n1);

    // bit not operator ~ 부호까지 바뀔 수 있으므로 unsigned char를 이용함
    unsigned char n2 = 136;
    unsigned char n3;
    n3 = ~n2;
    printf("\n%u\n", n3);

    char n4 = 17;
    char n5;
    n5 = ~n4;
    printf("%d\n", n5);

    // shift operator char로 지정하고 1바이트를 넘어도 표시는 가능
    unsigned char n6 = 34; // 0010 0010
    unsigned char n7 = 189; // 1011 1101
    printf("\n%u\n", n6 << 2); // 1000 1000
    printf("%u\n", n6 << 4); // 10 0010 0000
    printf("%u\n", n7 >> 3); // 0001 0111
    printf("%u\n", n7 << 4); // 1011 1101 0000

    // allocating after operation
    n7 &= n6;
    printf("\n%u\n", n7);
    n7 |= n6;
    printf("%u\n", n7);
    n7 ^= n6;
    printf("%u\n", n7);
    n7 <<= n6;
    printf("%u\n", n7);
    n7 >>= n6;
    printf("%u\n", n7);

    //practice1
    unsigned char num1 = 1;
    unsigned char num2 = 5;
 
    printf("\n%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);
 
    num1 = ~num2;
    printf("%u\n", num1);

    //practice2
    unsigned char num3 = 32; // 0010 0000
    num3 = num3 >> 4 << 1;
    printf("\n%u\n", num3);

    /* pratice!
    #include <stdio.h>
    int main()
    {
        unsigned int num1;
        unsigned int num2;
        scanf("%d %d", &num1, &num2);

        printf("%u\n", num1 ^ num2);
        printf("%u\n", num1 | num2);
        printf("%u\n", num1 & num2);
        printf("%u\n", num1 = ~num1);
        
        return 0;
    }
    */

    return 0;
}