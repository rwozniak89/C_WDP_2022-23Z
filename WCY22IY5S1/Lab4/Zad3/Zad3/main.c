#include <stdio.h>
#include <stdlib.h>

//3.	Napisz funkcj�, kt�ra sprawdza parzysto�� liczby. Badana liczba podana jest jako argument wej�ciowy (parametr funkcji).
//Przygotuj 3 wersj�.
//Pierwsza funkcja typu void, po prostu wy�wietla komunikat.
//Druga ze zwracaniem, je�eli parzysta to zwraca 0, je�eli nie parzysta to zwraca 1.
// Trzecia jako po��czenie (i wywo�anie) pierwszej i drugiej
//(mo�e by� dodatkowy parametr, kt�ry steruje wy�wietlaniem). (0,25pkt.)

void wyswietlParzystosc(int liczba)
{
    if(liczba % 2 == 0)
    {
        printf("liczba %d jest parzysta\n",liczba);
    }
    else
    {
        printf("liczba %d nie jest parzysta\n",liczba);
    }
}
int zwrocParzystosc(int wartosc)
{
    if(wartosc % 2 == 0)
    {
        return 0;
    }
    //else
    //{
        return 1;
    //}

    //////return (wartosc % 2);
    //return (wartosc % 2) ? 0 : 1 ;
}
///
/// funckja robi to i to, ma parametry ktore dziala tak i tak
///
int wyswietlLubZwrocParzystoscWgParametruSterowania(int liczbaDoSpr, int sterowanie){

    if(sterowanie != 0) {
        wyswietlParzystosc(liczbaDoSpr);
    }
    int obliczenia = zwrocParzystosc(liczbaDoSpr);
    return obliczenia;
}

int main()
{
    printf("Zad3\n");
    int liczbaX = 1;
    wyswietlLubZwrocParzystoscWgParametruSterowania(liczbaX, 1);
    wyswietlLubZwrocParzystoscWgParametruSterowania(2, 1);
    wyswietlLubZwrocParzystoscWgParametruSterowania(3, 1);
    int wynik = wyswietlLubZwrocParzystoscWgParametruSterowania(4, 0);
    printf("%d", wynik);

//    int liczba1 = zwrocParzystosc(1);
//    printf("%d", liczba1);
//
//    printf("%d", zwrocParzystosc(2));
//
//    int liczbaDoSprawdzenia = 18;
//    int licznaZwrocona18 = zwrocParzystosc(liczbaDoSprawdzenia);
//    printf("%d", licznaZwrocona18);
//    wyswietlParzystosc(1);
//    wyswietlParzystosc(2);
//    wyswietlParzystosc(3);
//    wyswietlParzystosc(4);
    return 0;
}
