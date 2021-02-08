#include <stdio.h>

/* while loop statement
초기식
while (조건식) ← 루프 선언문(loop statement)
{
    반복할 코드
    변화식
}
↑ 루프 본체(loop body) 및 변화식
*/

int main()
{
    // while문 기본 뼈대
    int i = 1;
    while (i<5)
    {
        printf("hehe %d\n",i);
        i++;
    }
    
    // 초기값을 감소시키며 반복
    int j = 50;
    while (j > 40)
    {
        printf("haha %d\n",j);
        j--;
    }
    
    // 입력횟수대로 반복
    int count;
    scanf("%d",&count);
    while(count > 0)
    {
        printf("oh %d\n",count);
        count--;
    }
    return 0;
}