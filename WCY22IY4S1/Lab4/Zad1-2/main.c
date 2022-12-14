#include <stdio.h>
#include <stdlib.h>

void wyswietlZaintersowania2();
void wyswietlZaintersowania3();
void wyswietlZaintersowani4();
void wyswietlZaintersowania5();

void wyswietlZaintersowania(  ){

    char zainteresowania[] = "militaria, kino, histora";
    printf("%s\n", zainteresowania);

    //return NULL;

}

int getAge(){

    int age = 18;
    return age;
}

int main()
{
    printf("Zad1!\n");

    wyswietlZaintersowania();
    wyswietlZaintersowania();
    wyswietlZaintersowania2();
    wyswietlZaintersowania2();

    int zmiennaZOgraniczeniem = 10;
    for( int i = 0; i< zmiennaZOgraniczeniem; i++ ){
    }

    char zat[] = { 'a', 'b', 'c', '\0' }; //""

    printf("Zad2!\n");

    int wartoscZwrana = getAge();
    printf("%d\n", wartoscZwrana);
    printf("%d\n", getAge() );

    return 0;
}


void wyswietlZaintersowania2() {
    printf("XXXXXXXXX\n");
}
