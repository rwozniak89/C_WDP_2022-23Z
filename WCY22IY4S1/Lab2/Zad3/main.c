#include <stdio.h>
#include <stdlib.h>
//3.	Napisz program wypisuj¹cy 15 liczb ca³kowitych, zaczynaj¹c od Twojego nr (z listy lub albumu), wykorzystaj ró¿ne pêtle. (0,5 pkt): „1.2”
//a.	Kolejne liczby wiêksze od w/w nr ,czyli rosn¹co;
//b.	Kolejne liczby parzyste mniejsze od w/w nr, czyli malej¹co;
//c.	Kolejne liczby podzielne przez 3 lub 5 wiêksze od w/w nr, czyli rosn¹co;
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
