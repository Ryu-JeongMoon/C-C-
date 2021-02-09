#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 177을 2진수로 나타내기
    int decimal = 177;
    int binary[8] = {0,}; // 배열 만들고 0으로 초기화

    int position = 0;
    while (1) // 무한루프
    {
        binary[position] = decimal % 2; // 나머지 저장
        decimal /= 2;
        position++;

        if (decimal == 0)
        break;
    }
    
    // 역순 출력
    for (int i = position - 1; i >= 0; i--) // 인덱스는 0부터 시작이므로 조건식에 0포함
    {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}