#include <stdio.h>
#include <stdlib.h>

void free_item(char *x) {
  free(x);
  x = NULL;
}

char* zwrocTekst(){

// TO nie dziala
//    char tablicaZnakow[] = "tekst";
//    return tablicaZnakow;

    //przyk³ad dla dynmaicznie tworzonej tablicy
    char* dynamicznaTablica = malloc(5 * sizeof(char));
    dynamicznaTablica = "tekst";
    return dynamicznaTablica;

    //to dzia³a --przyklad dla zadania 6
    return "tekst";
}



int main()
{
    printf("Zad6!\n");

    char* wynik = zwrocTekst();

    printf("wynik: %s", wynik);

    //free(*wynik);
    //free_item(wynik);

    return 0;
}
