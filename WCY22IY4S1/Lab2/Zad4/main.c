#include <stdio.h>
#include <stdlib.h>

//4.	Napisz program wykonuj¹cy konwersje pomiêdzy liczbami ca³kowitymi, a zmiennoprzecinkowymi. Zmienne zdefiniuj i zadeklaruj w kodzie. Wykonaj konwersjê, ewentualnie dodatkowe wymagane dzia³ania, wynik wyœwietl na ekranie dla przypadków (0,5 pkt) „2.2”:
//a)	float na int;
//b)	int na float;
//c)	dzielenie przez siebie dwóch liczb int;
//d)	dzielenie przez siebie dwóch liczb int, wynik jako float;
//e)	dzielenie liczby int przez float, wynik jako float;
//f)	dzielenie przez siebie dwóch liczb int (wykorzystaj operator rzutowania jawnego), wynik jako float,;


int main()
{
    printf("Zad4!\n");


    int i1=5, i2=6, iwynik;
    float f1 = 7.5, f2 = 9.5, fwynik;

    if (i2 !=0 && f2 != 0.0)
    {
        iwynik = i1/i2;
        printf("dzielenie int %i\n", iwynik);

        iwynik = i1/i2;  //ppkt d
        printf("dzielenie int wyswitl jako float %f\n", iwynik);

        fwynik = i1/i2;  //ppkt d2
        printf("dzielenie int wyswitl jako float %f\n", fwynik);


        fwynik = i1/f2; //ppkt e

        fwynik = (float)i1/(float)i2;  //ppkt f
        printf("dzielenie (float)int %f\n", fwynik);
    }
//    else if ( warunek...){
//        //dzialanie
//    }
//
//    else {
//        //dzialanie
//    }


    return 0;
}
