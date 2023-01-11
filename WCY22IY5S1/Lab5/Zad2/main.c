#include <stdio.h>
#include <stdlib.h>


int obliczPoleProstokata(int a, int b)
{
    //sprawdzenie....
    int pole = a + b;
    printf("%d\n", pole);
    return pole;
}

int main()
{
    printf("Z2\n");
    int bokA = 2;
    int bokB = 4;

    obliczPoleProstokata(bokA, bokB);
    obliczPoleProstokata(5, 5);

    return 0;
}
