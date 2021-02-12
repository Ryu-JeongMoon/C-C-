#include <stdio.h>
#include <string.h>

typedef struct _Person { // 구조체 이름, 관례상 _ABC 식으로
    char name[20];
    char address[100];
    int age;
} Person; // Person은 _Person의 별칭

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