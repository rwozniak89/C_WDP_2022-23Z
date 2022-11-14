#include <stdio.h>
#include <stdlib.h>


//1. Napisz program wypisuj¹cy na ekranie: imiê, nazwisko, nr z listy albo nr albumu (jest na legitymacji),
//wiek, sumê dwóch poprzednich wartoœci. Nastêpnie w kolejnej linii wypisz swoje zainteresowania.
//Do przechowywania liczb i ich sumy wykorzystaj odpowiedni zmienne. Dodatkowo wykorzystaj funkcjê printf()
//z wiêcej ni¿ jednym parametrem wejœciowym,
//oraz ze specyfikatorem konwersji. (0,5 pkt) „1.1”

int main()
{
    printf("Zad.1\n");

    printf("Radek W\n");

    char tab[] = "Radek W123";

    printf("%s\n", tab);

    int i = 0;
    while(tab[i] != '\0'){
        printf("%c", tab[i]);
        i++;
    }
    printf("\n");
    int rozmiar = sizeof(tab)/sizeof(char); // sizeof(tab)/sizeof(tab[0])
    for(int i =0; i< rozmiar; i++)
    {
        printf("%c", tab[i]);
    }

    return 0;
}
