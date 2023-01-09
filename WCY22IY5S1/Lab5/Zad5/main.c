#include <stdio.h>

#include <stdlib.h>



typedef enum
{

    Nawiazane,

    Nienawiazane,

    wTrakcieLaczenia

} statusPolaczenia ;



typedef struct
{

    statusPolaczenia status;
    char ipv4[15];
    char nazwa[64];

} Komputer;

typedef struct
{
    statusPolaczenia status;
    char ipv4[15];
    char* nazwa;
    //Serwer* sprzet;
} Serwer;

void wyswietlSerwer(Serwer komputer)
{
    printf("Komputer: %s, ", komputer.nazwa);
    printf("IPv4: %s, ", komputer.ipv4);
    printf("Status polaczenia: ");
    switch (komputer.status)
    {
    case Nawiazane:
        printf("Polaczono\n");
        break;
    case Nienawiazane:
        printf("Nie polaczono\n");
        break;
    case wTrakcieLaczenia:
        printf("W trakcie laczenia\n");
        break;
    default:
        printf("error 813...\n");
        break;
    }
}

void wyswietlKomputer(Komputer komputer)
{
    printf("Komputer: %s, ", komputer.nazwa);
    printf("IPv4: %s, ", komputer.ipv4);
    printf("Status polaczenia: ");
    switch (komputer.status)
    {
    case Nawiazane:
        printf("Polaczono\n");
        break;
    case Nienawiazane:
        printf("Nie polaczono\n");
        break;
    case wTrakcieLaczenia:
        printf("W trakcie laczenia\n");
        break;
    default:
        printf("error 813...\n");
        break;
    }
}

int main()
{
    Komputer komputer = {wTrakcieLaczenia, "192.168.0.1", "Moj komputer"};
    wyswietlKomputer(komputer);
    komputer.status = Nawiazane;

    printf("...\n");
    wyswietlKomputer(komputer);

    Serwer serwerek;
    serwerek.status = Nienawiazane;
    serwerek.nazwa = "abc";
    printf("...\n");
    wyswietlSerwer(serwerek);
    return 0;
}
