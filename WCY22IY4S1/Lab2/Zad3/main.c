#include <stdio.h>
#include <stdlib.h>
//3.	Napisz program wypisuj�cy 15 liczb ca�kowitych, zaczynaj�c od Twojego nr (z listy lub albumu), wykorzystaj r�ne p�tle. (0,5 pkt): �1.2�
//a.	Kolejne liczby wi�ksze od w/w nr ,czyli rosn�co;
//b.	Kolejne liczby parzyste mniejsze od w/w nr, czyli malej�co;
//c.	Kolejne liczby podzielne przez 3 lub 5 wi�ksze od w/w nr, czyli rosn�co;
int main()
{
    printf("Zad3!\n");

    int i = 0;
    int max = 10; // i + 10;

    while(i < max){
        printf("%i ", i);
        i = i+1;
    }
    printf("\n");

    //for( ; ; )
    for(int j = 0; j < max; j++)
    {
        printf("%i ", j);
    }
    printf("\n");

    int k = 0;
    do{
        printf("%i ", k);
        k++;
    } while(k<max);
    printf("\n");

    //if( x % 3 == 0 || x > 5)

    return 0;
}
