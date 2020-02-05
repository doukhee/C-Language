#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

/** 구조체 선언 및 변수 선언 */
struct Person{
    char name[20];
    int age;
    char address[100];
} p1;

int main(){
    strcpy(p1.name, "hong");
    p1.age = 30;
    strcpy(p1.address, "seoul");

    printf("name : %s\r\n", p1.name);
    printf("age : %d \r\n", p1.age);
    printf("address : %s \r\n", p1.address);

    return 0;
}