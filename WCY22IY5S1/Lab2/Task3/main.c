#include <stdio.h>
#include <stdlib.h>
//3.	Napisz program wypisuj¹cy 15 liczb ca³kowitych, zaczynaj¹c od Twojego nr (z listy lub albumu), wykorzystaj ró¿ne pêtle. (0,5 pkt): „1.2”
//b.	Kolejne liczby parzyste mniejsze od w/w nr, czyli malej¹co;
int main()
{
    printf("Task3d!\n");

    int album = 45880;
    int stop = album + 10;

    for ( int i=album; i< stop; i++ ){
        if(i % 4 == 0)
        {
            printf("%i podzielna przez 4\n", i);
        }
        if(i % 2 == 0)
        {
            printf("%i podzielna przez 2 - parzysta\n", i);
        }
        else if( i % 3 == 0 && i % 5 == 0)
        {
            printf("%i podzielna przez 3 i 5\n", i);
        }
//        else {
//            printf("%i (pozostala liczba)\n", i);
//        }



    }
    printf("\n");

    int zmiennaPetli=album;
    for ( ; ;  ){
        if(zmiennaPetli>= stop)
        {
            break;
        }
        printf("%i, ", zmiennaPetli);
        zmiennaPetli++;
    }
    printf("\n");

    //////
    int j = album;
    while (j<stop){
        printf("%i, ", j);
        j++;
    }
    printf("\n");

    /////
    int k= album;
    do{
        printf("%i, ", k);
        k++;
    }while( k< stop);

    printf("\n");



    return 0;
}
