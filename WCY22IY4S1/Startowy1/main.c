#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Hello world Startowy1!\n");

//
//1. kalkulator podstawowych dzia³añ. Zmienne zdefiniowane i zadeklarowen w kodzie.
//2 zmienne calkowie
//2 zmienne zmiennorzecikowe
//Dzialania dod, ode, dziel, mnoz, modulo, z wyswietleniem na konsoli
//
//Wykonanie 5 podstawowych dzia³an  (1pkt)

    int a=5, b=3;
    int wynik_i = 0;
    float wynik_f = 0.0;


    wynik_i = a + b;
    printf("Wynik %i\n", wynik_i, wynik_f );

    if(b != 0){
        wynik_f = ((a)/ ((float) b));
    }

     printf("Wynik %i , wynik kolejny %f \n", wynik_i, wynik_f );  //%.2f





    return 0;
}
