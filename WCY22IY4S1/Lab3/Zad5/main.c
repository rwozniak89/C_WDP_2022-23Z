#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
    printf("Zad5!\n");
    srand(time(NULL)); // add #include <time.h>



    //int tab[]={11,22,3,88,12};
    int tab[SIZE];
    for(int i=0; i< SIZE ; i++){
        int losowaLiczba = rand();
        tab[i] = losowaLiczba % 101;
    }
    int size = sizeof(tab)/sizeof(int);

    int max=tab[0]; //INT_MIN; /// ;
    int indexMax = 0;

    for(int i=1;i<size;i++)
    {
        printf("czy element o index: %d i wartosci %d jest wieszy od %d ....", i, tab[i], max);
        if(tab[i]>max)
        {
            max=tab[i];
            indexMax = i;
            printf("   tak jest wiekszy, dlatego podstawiam max na %d\n", max);

        }
        else{
             printf("   nie jest wiekszy, dlatego zostawiam max jako %d\n", max);
        }
    }
    printf("max: %d\n, indexMax: %d, a inaczej max to %d", max, indexMax,  tab[indexMax]);

    return 0;
}
