#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person{
    char name[20];
    int age;
    char address[100];
}Person;

int main(){
    Person *p1 = malloc(sizeof(Person));

    strcpy(p1->name, "hong");
    p1->age = 30;
    strcpy(p1->address, "seoul");

    printf("name : %s \r\n", p1->name);
    printf("age : %d \r\n", p1->age);
    printf("address : %s \r\n", p1->address);
    /** 동적 메모리 해제 포인터 변수 여야 한다. */
    free(p1);

    return 0;
}