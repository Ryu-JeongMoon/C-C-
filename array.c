#include <stdio.h>

// 배열 선언과 사용할 때 모두 대괄호 []

int main()
{
    // 인덱스로 값 출력
    int numArr[10] = {11, 12, 13, 14, 15, 16, 17, 18 ,19, 20};

    printf("%d\n", numArr[0]);
    printf("%d\n", numArr[2]);
    printf("%d\n", numArr[6]);
    printf("%d\n", numArr[8]);
    printf("%d\n", numArr[3]);
    printf("\n");    

    // 순서대로 출력
    for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
    {
        printf("%d\n", numArr[i]);
    }
    printf("\n");

    // 요소의 합 구하기
    int sum = 0; // 쓰레기값이 있어 오차가 생길 수 있으므로 0으로 초기화시켜야함
    for (int i = sizeof(numArr)/sizeof(int) - 1; i >=0; i--)
    {
        sum += numArr[i];
        printf("%d\n", numArr[i]);
    }
    printf("\n");
    printf("Sum: %d\n", sum);
    printf("\n");
    
    // 저장된 값을 변경 *2 & +10
    for (int i = 0; i < sizeof(numArr)/sizeof(int); i++)
    {
        numArr[i] *= 2;
        printf("%d\t", numArr[i]);

        numArr[i] += 10;
        printf("%d\n", numArr[i]);
    }
    printf("\n");
    
    return 0;
}