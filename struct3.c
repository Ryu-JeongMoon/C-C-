#include <stdio.h>
#include <string.h>

typedef struct { // 구조체 이름을 설정하기 번거로워 익명 구조체 사용, 구조체 이름 생략
    char name[20];
    char address[100];
    int age;
} Person; // 구조체의 별칭을 반드시 사용해야 함

int main()
{
    Person p1; // 별칭을 p1 변수로 선언
    // struct _Person p1; 과 같은 작용

    strcpy(p1.name, "홍 동 길");
    strcpy(p1.address, "서울시 용산구 포동포동");
    p1.age = 55;

    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);

    return 0;
}