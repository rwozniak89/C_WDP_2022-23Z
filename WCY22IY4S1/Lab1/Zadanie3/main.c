#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zad3!\n");

    printf("Ile lat?\n");

    int age;

    scanf("%i", &age);

    printf("Masz lat %d\n", age);

    if(age >=18)
    {
         printf("Masz lat %d i jestes pelnoletni\n", age);

    }
    else {
    printf("Masz lat %d i nie jestes pelnoletni\n", age);
    }

    return 0;
}
