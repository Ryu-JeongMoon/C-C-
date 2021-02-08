#include <stdio.h>
// shift operator

int main()
{
    /* 자릿수를 초과할 때의 shift operation
    0000 0000 
    첫번째 비트 ; Most Significant Bit, MSB
    마지막 비트 ; Least Significant Bit, LSB */

    unsigned char n = 240, n1 = 15;
    unsigned char n2;
    unsigned char n3;
    n2 = n << 3;
    n3 = n1 >> 3;
    printf("%d\n",n2);
    printf("%d\n",n3);

    // 부호 있는 자료형은 shift연산 후 최상위 비트에 따라 부호가 결정됨
    unsigned char n4 = 56;
    char n5 = 85;
    char n6, n7, n8, n9;
    n6 = n4 << 3;
    n7 = n5 << 3;
    n8 = n4 >> 4;
    n9 = n5 >> 4;
    printf("\n%d %d %d %d\n",n6,n7,n8,n9);

    // practice
    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;
    flag1 |= 1 << 2;
    flag1 &= 1 << 2;
    flag2 ^= 1 << 3;
    printf("%u %u\n", flag1, flag2);
 

    return 0;
    
}