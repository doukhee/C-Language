#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
    char address[100];
};

int main(){
    /** 구조체 선언 */
    struct Person p1;
    /** 문자열 복사 함수 */
    strcpy(p1.name, "hong");
    p1.age = 30;
    strcpy(p1.address, "seoul");

    printf("name : %s \r\n", p1.name);
    printf("age : %d \r\n", p1.age);
    printf("address : %s \r\n", p1.address);

    return 0;
}