#include <stdio.h>
#include <stdlib.h>

int main()
{

    //kalkulator podstawowych dzialan
    printf("Hello world 123!\n");

    int wynik1 = 5;
    float wynik2 = 5;
    printf("%i\n", wynik1);

    //int WYNIK4 = 5 % 0;
    //printf("%i", WYNIK4);


    //wyswietlanie 10 kolejnych liczb naturalnych, i sprawdzenie kazdej czy jest parzysta/nieparzysta

    for( int i = 1; i <= 10; i++)
    {
        printf("%d", i);
        if(i%2 == 0){
            printf(" - parzysta\n", i);
        }
        else{
        //else if(i%2 != 0){
            printf(" - nieparzysta\n", i);
        }

    }


    //zapytanie uzytokwnika ile ma lat, pobranie wartosci, sprawdzenie czy jest pelnoletni, wyswietlenie stosownej informacji


    int age;

    printf("Ile masz lat\n");
    scanf("%i", &age);

    printf("Masz %d lat\n", age);

    //if(age ...)














    return 0;
}
