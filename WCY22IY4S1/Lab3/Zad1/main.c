#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zad1!\n");

    for(int i = 0; ; i++){

        if(i == 100){
            break;
        }
        printf("informacja 1, ");

        printf("liczba %i ", i);

        if(i == 60){
            continue;
        }


        printf("informacja 2,\n");

    }



    return 0;
}
