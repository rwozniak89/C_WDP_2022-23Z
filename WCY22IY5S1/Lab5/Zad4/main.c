#include <stdio.h>
#include <stdlib.h>

#include "tri.h"

struct trojkat {
    int a;
    int b;
    int c;
};

void wyswietlTrojkat(struct trojkat param1){
    printf("trojakt a:%d, b:%d, c:%d\n", param1.a, param1.b, param1.c);
}

void wyswietlTrianglePtr(triangle* param1){
    printf("triangle a:%d, b:%d, c:%d\n", param1->a, param1->b, param1->c);
}

int main()
{
    printf("Z4!\n");

    struct trojkat  nazwaZmiennej;
    nazwaZmiennej.a = 2;
    nazwaZmiennej.b = 5;
    nazwaZmiennej.c = 3;

    struct trojkat  nazwaZmiennej2 = { 3, 3, 3};
    triangle  nazwaZmiennej3 = { .a = 3, .b = 3, .c = 3};

    wyswietlTrojkat(nazwaZmiennej);
    wyswietlTriangle(nazwaZmiennej3);


    triangle* ptr = (triangle*)malloc(1 * sizeof(triangle));
    ptr->a = 11;
    ptr->b = 22;
    ptr->c = 33;
    wyswietlTrianglePtr(ptr);

    return 0;
}
