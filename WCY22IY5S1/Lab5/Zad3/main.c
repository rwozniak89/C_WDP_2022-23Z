#include <stdio.h>
#include <stdlib.h>

//enum week { PONIEDZIALEK,
//    WTOREK,
//    SRODA,
//    CZWARTEK=11,
//    PIATEK,
//    SOBOTA,
//    NIEDZIELA
//};

typedef enum { PONIEDZIALEK,
    WTOREK=10,
    SRODA,
    CZWARTEK,
    PIATEK,
    SOBOTA,
    NIEDZIELA
} tydzien;

void wyswietlDzien(tydzien dzien)
{
    switch (dzien)
    {
    case PONIEDZIALEK:
        printf("Poniedzialek\n");
        //break;
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
    default:
        printf("Error 4321\n");
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
