#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// malloc은 <stdlib.h> 필요

int main()
{
    // 변수 = malloc(sizeof(data type)); data type만큼의 크기를 할당
    int *num;
    num = malloc(sizeof(double));
    *num = 65;
    printf("%d\n",*num);
    free(num); // malloc을 이용한 메모리 할당 후엔 꼭 free()를 이용해 해제
    
    // memset = memory set, memset (포인터, 설정할 값, 크기) <string.h> 필요
    long long *num1 = malloc(sizeof(long long));
    memset(num1, 0x27, 8);
    printf("0x%llx\n", *num1);
    free(num1);
    
    return 0;
}