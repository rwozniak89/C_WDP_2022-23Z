#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world Startowy1!\n");

    int a=5, b=3;
    int wynik_i = 0;
    float wynik_f = 0.0;


    wynik_i = a + b;
    printf("Wynik %i\n", wynik_i);

    if(b != 0){
        wynik_f = ((a)/ ((float) b));
    }

     printf("Wynik %i , wynik kolejny %f \n", wynik_i, wynik_f );

    return 0;
}
