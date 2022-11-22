#include <stdio.h>
#include <stdlib.h>

//2.	Napisz program wykonuj¹cy dzia³ania matematyczne m.in. takie jak:  dodawanie, odejmowanie, mno¿enie, dzielenie,
//modulo na typach danych unsigned int, long int, float, char. Zmienne zdefiniuj i zadeklaruj w kodzie. Wyniki dzia³añ wypisz na ekranie.
//Wykorzystaj formanty funkcji printf np. „%i, %f, %g”. (Dodatkowo warto wykorzystaæ tryb debugowania i brakepoints,
//do tego wymagany jest m.in. debuger mingw). Czy wszystkie dzia³ania mo¿na wykonaæ?
//Czy wyniki s¹ takie, jakich mo¿na siê spodziewaæ?
//OdpowiedŸ zapisz w komentarzach jakie typy danych s¹ jeszcze dostêpne? (0,5 pkt).   „2.1”

int main(){
    unsigned int u1=25, u2=50;

    float f1=12.4, f2=6.12;
    long long l1=11111111111111125, l2=5;

    char c1='a';
    char c2='b';

    printf("unsigned int sum %i\n", u1 + u2);
    printf("float sum %.2f\n", f1 + f2);
     printf("float sum %g\n", f1 + f2);
    printf("long int sum %lld\n", l1 + l2);
    printf("char sum %c\n", c1 + c2);
    printf("char sum %i\n", c1 + c2);

    unsigned char c3 = c2 + 200;
    printf("char sum %c\n", c2 + 1);
    printf("char sum %i\n", c2 + 1);
    printf("char sum %i\n", c3);
    printf("char sum %c\n", c3);

    printf("unsigned int diffrence %u\n", u1 - u2);
    printf("float diffrence %f\n", f1 - f2);
    printf("long int diffrence %ld\n", l1 - l2);
    printf("char diffrence %c\n", c1 - c2);

    printf("unsigned int multiply %i\n", u1 * u2);
    printf("float multiply %f\n", f1 * f2);
    printf("long int multiply %ld\n", l1 * l2);
    printf("char multiply %c\n", c1 * c2);

    if( u2 != 0 && f2 != 0.0 && l2 != 0 && c2 != 0)  // AND - && , OR - ||
        printf("unsigned int division %i\n", u1 / u2);
        printf("float division %f\n", f1 / f2);
        printf("long int division %ld\n", l1 / l2);
        printf("char division %c\n", c1 / c2);

        printf("unsigned int mod %i\n", u1 % u2);
        printf("long int mod %ld\n", l1 % l2);
        printf("char mod %c\n", c1 % c2);
    }

    //u2 = 0;



    // C data types: signed char, unsingedchar, short, unsigned long int, long double
    return 0;
}
