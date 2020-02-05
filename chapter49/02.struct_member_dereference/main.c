#include <stdio.h>
#include <stdlib.h>

struct Data{
    char c1;
    int *numPtr;
};

int main(){
    int num1 = 10;
    struct Data d1;
    struct Data *d2 = malloc(sizeof(struct Data));

    d1.numPtr = &num1;
    d2->numPtr = &num1;

    /** 구조체의 멤버를 역참조 */
    printf("%d\r\n", *d1.numPtr);
    /** 구조체 포인터의 멤버를 역 참조 */
    printf("%d\r\n", *d2->numPtr);

    d2->c1 = 'a';
    /** a:구조체 포인터의 역참조하여 c1에 접근 (d2->c1과 같다.) */
    printf("%c\r\n", (*d2).c1);
    /** 구조체 포인터를 역참조하여 numPtr에 접근한 뒤 다시 역참조 (*d2->numPtr과 같다.) */
    printf("%d\r\n", *(*d2).numPtr);

    /** 구조체 동적 할당 제거 */
    free(d2);

    return 0;
}