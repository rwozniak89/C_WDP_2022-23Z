#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tryb[100] ="";
    do{


    printf("\nTask7. Program przelicza jednostki, podaj tryb\n");
    printf("1. KM -> kW\n");
    printf("2. kW -> KM\n");
    printf("0 - koniec programu\n");


    scanf("%s", tryb);

    printf("%s\n", tryb);

    if(tryb[0] == '1')
    {
        printf("wyrbano tryb 1\n");
    }
    else if(tryb[0] == '2')
    {
        printf("wyrbano tryb 2\n");
    }
    else if(tryb[0] == '0')
    {
        printf("koniec programu\n");
    }
    else{
        printf("brak trybu\n");
    }


    }while(tryb[0] != '0');


    return 0;
}
