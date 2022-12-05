#include <stdio.h>
#include <stdlib.h>

//2.	Zainicjalizuj i zadeklaruj tablice jednowymiarow¹ na 2 ró¿ne sposoby.
//Nale¿y skorzystaæ z ró¿nych typów zmiennych. Na koñcu w czytelny sposób
//wypisz na ekran zawartoœæ tablic.
//Zadanie zrealizuj równie¿ dla tablic 2 wymiarowych, a dla chêtnych osób,
//równie¿ tablice 3 wymiarowe (w tych przypadkach wybierz jeden wygodny sposób
//na zadeklarowanie i zdefiniowanie tablic). (0.5 pkt.)

#define SizeMain 5


int main()
{
    printf("Zad2!\n");

    enum sizeEnum { s1=5 };

    //const int rozmiar = 5;

    int tab2[] = { 31, 32, 33, 34, 35 };
    int tab3[SizeMain] = { 31, 32, 33, 34, 35 };
    float tab4[s1] = { 31, 32, 33, 34, 35 };

    int tab[10];
    tab[0] = 11;
    tab[1] = 12;
    tab[2] = 13;
    tab[3] = 14;
    tab[4] = 15;
    //....
    tab[5] = 21;
    tab[9] = 25;
    int sizeTab = sizeof(tab) / sizeof(int); //10;

    int sizeTab2 = sizeof(tab2) / sizeof(int); // sizeof(tab2[0]) sizeof(*tab2);

    for(int i=0; i < sizeTab; i++){
        printf("index:%i, wartosc:%i, adres:%p, zawartosc1: %i, zawartosc2: %i\n", i, tab[i], &tab[i], *(&tab[i]), *(tab+i)  );
    }

    for(int i=0; i < sizeTab; i++){
        tab[i] = 0;//i;
    }
    printf("tablica po inicjalizacji w petli\n");
    for(int i=0; i < sizeTab; i++){
        printf("index:%i, wartosc:%i, adres:%p, zawartosc1: %i, zawartosc2: %i\n", i, tab[i], &tab[i], *(&tab[i]), *(tab+i)  );
    }
    int tab5[SizeMain] = { 0 };
    printf("tablica po inicjalizacji 0 \n");
    for(int i=0; i < SizeMain; i++){
        printf("index:%i, wartosc:%i,\n", i, tab5[i]  );
    }


    int d2size = 3;
    int d2[3][3];
    d2[0][0]=11;
    d2[0][1]=21;
    d2[0][2]=31;

    for(int i=0; i < d2size; i++){
        for(int j=0; j < d2size; j++){
            printf("indexX:%i,indexY:%i, wartosc:%i\n", i,j, d2[i][j] );
        }

    }

    int matrix1[][3] = {{5,3,2}, {1,2,4}};


    //return 0;
}
