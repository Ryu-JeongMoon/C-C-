#include <stdio.h>
// 2차원 배열

int main()
{
    // 2차원 배열 선언
    int numArr[2][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10 ,11, 12}
    };

    printf("%d\n", numArr[0][4]);
    printf("%d\n", numArr[0][2]);
    printf("%d\n", numArr[1][4]);
    printf("\n");

    int numArr2[2][5] = {0,};
    printf("%d\n", numArr2[0][4]);
    printf("%d\n", numArr2[1][3]);
    printf("\n");

    // 초기화하지 않고 값을 직접 할당
    // 범위를 벗어난 값을 요구하면 쓰레기값 나옴
    int numArr3[2][3];
    numArr3[0][0] = 1;
    numArr3[0][1] = 2;
    numArr3[0][2] = 3;
    numArr3[1][0] = 4;
    numArr3[1][1] = 5;
    numArr3[1][2] = 6;
    printf("%d\n",numArr3[0][0]);
    printf("%d\n",numArr3[1][1]);
    printf("%d\n",numArr3[1][2]);
    printf("\n");

    // 배열 요소 출력
    int col = sizeof(numArr3[0]) / sizeof(int);
    int row = sizeof(numArr3) / sizeof(numArr3[0]);
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", numArr3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 배열 요소 역순 출력
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            printf("%d ", numArr3[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    int (*numPtr)[3] = numArr3;
    printf("%p\n", *numPtr);
    printf("%p\n", *numArr3);
    printf("%d\n", sizeof(numPtr));
    printf("%lu\n", sizeof(numArr3));
    printf("%d\n", numPtr[1][2]);
    return 0;
}