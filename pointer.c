#include <stdio.h>

// pointer

int main()
{
    // 자료형에 따라 메모리에 접근하는 방식이 다르다
    long long *l;
    float *f;
    char *c;

    long long l1 = 10l;
    float f1 = 2.0f;
    char c1 = 'a';

    printf("%lld\n",l1);
    printf("%p\n",l);
    printf("%f\n",f1);
    printf("%p\n",f);
    printf("%c\n",c1);
    printf("%p\n",c);

    // 자료형이 정해져있지 않은 포인터 void, 범용 포인터
    // 역참조할 수는 없다

    // 이중 포인터, *nump2 = num1의 주소, **nump2 = num1의 값
    int *nump1;
    int **nump2;
    int num1 = 5;

    nump1 = &num1;
    nump2 = & nump1;

    printf("\n%p\n", nump1);
    printf("%d\n", *nump1);
    printf("%p\n", nump2);
    printf("%p\n", *nump2);
    
}