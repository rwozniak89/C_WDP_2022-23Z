#include <stdio.h>
#include <stdlib.h>

//4.	Napisz program wykonuj�cy konwersje pomi�dzy liczbami ca�kowitymi, a zmiennoprzecinkowymi. Zmienne zdefiniuj i zadeklaruj w kodzie. Wykonaj konwersj�, ewentualnie dodatkowe wymagane dzia�ania, wynik wy�wietl na ekranie dla przypadk�w (0,5 pkt) �2.2�:
//a)	float na int;
//b)	int na float;
//c)	dzielenie przez siebie dw�ch liczb int;
//d)	dzielenie przez siebie dw�ch liczb int, wynik jako float;
//e)	dzielenie liczby int przez float, wynik jako float;
//f)	dzielenie przez siebie dw�ch liczb int (wykorzystaj operator rzutowania jawnego), wynik jako float,;


int main()
{
    printf("Zad4!\n");


    int i1=5, i2=6, iwynik;
    float f1 = 7.5, f2 = 9.5, fwynik;

    if (i2 !=0)
    {
        iwynik = i1/i2;
        printf("dzielenie int %i\n", iwynik);

        fwynik = (float)i1/(float)i2;  //ppkt f
        printf("dzielenie (float)int %f\n", fwynik);
    }


    return 0;
}
