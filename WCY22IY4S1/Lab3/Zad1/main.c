#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zad1!\n");

    int indexOfAlbum = 45879;

    int stop = indexOfAlbum +100;
    int stopWithBreak = indexOfAlbum + 95;
    int stopWithContinue = indexOfAlbum + 60;

    for(int i = indexOfAlbum; i<stop ; i++){

        if(i == stopWithBreak){
            break;
        }
        printf("informacja 1, ");

        printf("liczba %i ", i);
        if( i % 2 == 0){
            printf(" - liczba parzysta ");
        }

        if(i == stopWithContinue){
            continue;
        }


        printf("informacja 2,\n");

    }



    return 0;
}
