#include <stdio.h>
#include <stdlib.h>



int zwrocParzystosc(int liczba){
    if(liczba%2==0) {
        return 0;
    }
    //else{
        return 1;
    //}
    //return i%2==0 ? 0 : 1;
    //return i%2==0
}

void wyswietlParzystosc(int liczba){
    if(liczba%2==0) {
        printf("%d - liczba parz\n", liczba);
    }
    else{
        printf("%d - liczba nieparz\n", liczba);
    }
}

int wyswietlIZwrocParzystosc(int x, int  sterowanie){
    if(sterowanie != 0){
        wyswietlParzystosc( x);
    }
    int wynikOdebrany = zwrocParzystosc( x);
    printf("wynikOdebrany: %d\n",wynikOdebrany);

    return wynikOdebrany;

}


int main()
{
    printf("Zad3!\n");

    int y = 1;
    int wynikPonownieOdebrany = wyswietlIZwrocParzystosc(y, 1);
    wyswietlIZwrocParzystosc(2, 1);
    wyswietlIZwrocParzystosc(3, 1);
    wyswietlIZwrocParzystosc(4, 1);


    return 0;
}
