#include <stdio.h>
#include <stdlib.h>


struct trojkat {
    int a;
    int b;
    int c;
};
typedef struct {
    int a;
    int b;
    int c;
} triangle;

int main()
{
    printf("Z4!\n");

    struct trojkat  nazwaZmiennej;
    nazwaZmiennej.a = 2;
    nazwaZmiennej.b = 5;
    nazwaZmiennej.c = 3;

    struct trojkat  nazwaZmiennej2 = { 3, 3, 3};
    triangle  nazwaZmiennej3 = { .a = 3, .b = 3, .c = 3};


    return 0;
}
