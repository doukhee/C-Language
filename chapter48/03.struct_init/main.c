#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Person{
    char name[10];
    int age;
    char address[100];
};

int main(){
    /** 구조처 선언과 함꼐 초기화 */
    struct Person p1 = {.name="hong", .age = 30, .address="seoul"};

    printf("name : %s\r\n", p1.name);
    printf("age : %d \r\n", p1.age);
    printf("address : %s \r\n", p1.address);

    struct Person p2 = {.name="kim", .age=25, .address="Newyork"};

    printf("name : %s\r\n", p2.name);
    printf("age : %d \r\n", p2.age);
    printf("address : %s \r\n", p2.address);


    return 0;

}