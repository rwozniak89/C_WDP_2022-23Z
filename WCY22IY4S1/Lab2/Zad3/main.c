#include <stdio.h>
#include <stdlib.h>
//3.	Napisz program wypisuj¹cy 15 liczb ca³kowitych, zaczynaj¹c od Twojego nr (z listy lub albumu), wykorzystaj ró¿ne pêtle. (0,5 pkt): „1.2”
//a.	Kolejne liczby wiêksze od w/w nr ,czyli rosn¹co;
//b.	Kolejne liczby parzyste mniejsze od w/w nr, czyli malej¹co;
//c.	Kolejne liczby podzielne przez 3 lub 5 wiêksze od w/w nr, czyli rosn¹co;
int main()
{
    printf("Zad3!\n");
    //c
    int i = 45879;
    int max = i + 15;

    while(i < max){
//        if( i % 3 == 0 || i % 5 == 0){
//            printf("%i ", i);
//        }

        if( i % 3 == 0){
            printf("%i ", i);
        }
        else if( i % 5 == 0)){
            printf("%i ", i);
        }

        i = i+1;
    }
    printf("\n");

    //for( ; ; )
//    for(int j = 0; j < max; j++) // skok o 2 ... j=j+2
//    {
//        printf("%i ", j);
//
//        //j=j+1; //j++;
//    }
//    printf("\n");
//
//    int k = 0;
//    do{
//        printf("%i ", k);
//        k++;
//    } while(k<max);
//    printf("\n");

    //if( x % 3 == 0 || x > 5)

    return 0;
}
