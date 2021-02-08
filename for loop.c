#include <stdio.h>
// loop statement

int main()
{
    // 반복횟수가 정해져 있을때 사용
    for (int i = 0; i < 3; ++i)
    {
        printf("hehe\n");
    }
    printf("\n");

    // 초기값이 0일 필요는 없다
    for (int i = 1; i < 4; ++i)
    {
        printf("haha\n");
    }
    printf("\n");

    // 초기값의 감소
    for (int i = 3; i > 0; --i)
    {
        printf("hihi\n");
    }
    printf("\n");

    // {}의 생략, printf문이 2개 이상일때부터는 생략해선 안 됨
    for (int i = 3; i > 0; i--)
        printf("huhu\n");
    printf("\n");

    // 입력횟수만큼 반복, 초기값에 count OR 조건식에 count 활용
    int n;
    scanf("%d", &n);
    for (n; n < 10; n++)
        printf("kk\n");
    printf("\n");
    
    // 변수 두개를 사용하는 for statement
    for (int i = 0, j = 0; i < 10; i++, j += 10)
        printf("%d %d\n",i,j);
    
    /* practice a~z까지 출력하기
    char b;
    scanf("%c", &b);
    
    for (b; b <= 'z'; b++)
        printf("%c", b);
    */
    return 0;
}