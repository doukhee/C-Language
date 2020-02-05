#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person{
    char name[20];
    int age;
    char address[100];
};

int main(){
    /** 구조체 포인터 선언, 메모리 할당 */
    struct Person *p1 = malloc(sizeof(struct Person));
    /** 화살표 연산자로 구조체 멤버에 접근하여 값 할당 */
    strcpy(p1->name, "hong");
    p1->age = 30;
    strcpy(p1->address, "seoul");

    printf("name : %s \r\n", p1->name);
    printf("age : %d \r\n", p1->age);
    printf("address : %s \r\n", p1->address);

    return 0;
}