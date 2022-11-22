#include <stdio.h>
#include <stdlib.h>
//4.	Napisz program wykonuj¹cy konwersje pomiêdzy liczbami ca³kowitymi, a zmiennoprzecinkowymi.
//Zmienne zdefiniuj i zadeklaruj w kodzie. Wykonaj konwersjê, ewentualnie dodatkowe wymagane dzia³ania,
//wynik wyœwietl na ekranie dla przypadków (0,5 pkt)
//a)	float na int;
//b)	int na float;
//c)	dzielenie przez siebie dwóch liczb int;
//d)	dzielenie przez siebie dwóch liczb int, wynik jako float;
//e)	dzielenie liczby int przez float, wynik jako float;
//f)	dzielenie przez siebie dwóch liczb int (wykorzystaj operator rzutowania jawnego), wynik jako float,;

int main()
{
    printf("TASK4!\n");

    int a = 18, b = 5, wynikInt;
    float c = 28.5, d= 3.2, wynikFloat;

    wynikInt = c; //(int)c;
    printf("a) %i\n", wynikInt);

    if(b != 0 && d != 0){
        wynikInt = a/b;
        printf("c) %i\n", wynikInt);

        wynikFloat = a/b;
        printf("d) %f\n", wynikFloat);

        wynikFloat = a/d;
        printf("e) %f\n", wynikFloat);

        wynikFloat =  a/ (float)b;
        printf("f) %f\n", wynikFloat);
        wynikFloat =  (float)a/ b;
        printf("f) %f\n", wynikFloat);
        wynikFloat =  (float)a/ (float)b;
        printf("f) %f\n", wynikFloat);

        wynikInt =  c/ d;
        printf("g) %i\n", wynikInt);
    }




    return 0;
}
