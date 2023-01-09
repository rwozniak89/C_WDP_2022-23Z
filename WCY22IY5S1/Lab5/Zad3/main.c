#include <stdio.h>
#include <stdlib.h>

enum week { PONIEDZIALEK,
    WTOREK=10,
    SRODA,
    CZWARTEK,
    PIATEK,
    SOBOTA,
    NIEDZIELA
};

//typedef enum { PONIEDZIALEK,
//    WTOREK=10,
//    SRODA,
//    CZWARTEK,
//    PIATEK,
//    SOBOTA,
//    NIEDZIELA
//} week;

void wyswietlDzien(enum week dzien)
{

    switch (dzien)
    {

    case 0:
        printf("Poniedzialek\n");
        break;

    case WTOREK:

        printf("Wtorek\n");

        break;

    case SRODA:

        printf("Sroda\n");

        break;

    case CZWARTEK:

        printf("Czwartek\n");

        break;

    case PIATEK:

        printf("Piatek\n");

        break;

    case SOBOTA:

        printf("Sobota\n");

        break;

    case NIEDZIELA:

        printf("Niedziela\n");

        break;

    }

}

int main()
{
    int zwyklaLiczba = PONIEDZIALEK;
    printf("Hello world!\n");
    wyswietlDzien(PONIEDZIALEK);
    wyswietlDzien(0);
    wyswietlDzien(zwyklaLiczba);
    wyswietlDzien(CZWARTEK);

    wyswietlDzien(NIEDZIELA);

    return 0;
}
