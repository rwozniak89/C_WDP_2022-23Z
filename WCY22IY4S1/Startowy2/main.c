#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world Start2 !!!!!!!###########\n");

  //  2. wyœwietlanie 10 kolejnych liczb naturalnych, i sprawdzenie ka¿dej czy jest parzysta/nieparzysta (1pkt)



    for(int i =0 ; i<10 ; i++ )
    {
        printf("%d \n", i);
    }

    int i=0;
    for( ; ; )
    {

        printf("%d \n", i);

        i++;

        if(i>=10)
        {
            break;
        }

    }

    return 0;
}
