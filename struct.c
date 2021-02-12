#include <stdio.h>
#include <string.h>

struct Person{ // struct 구조체명 {};
    char name[20];
    char address[100];      // 구조체 안의 요소 -> 멤버
    int age;
} p1; // 세미콜론 필수, 닫을때 변수를 선언하면 다음 함수에서 선언할 필요 X

int main()
{
    // struct Person p1; <- Person 구조체를 p1 변수로 선언

    strcpy(p1.name, "홍 동 길");
    strcpy(p1.address, "서울시 용산구 포동포동");
    p1.age = 55;

    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);
    
    return 0;
}