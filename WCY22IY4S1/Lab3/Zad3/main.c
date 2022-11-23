#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Zad3!\n");

    printf("task1!\n");

    char name[] = "a b"; //\0
    char name1[] = {'a', ' ', 'b'}; //\0

    int sizeArrayName1 = sizeof(name1)/ sizeof(char);
    int sizeArrayName0 = sizeof(name )/ sizeof(char);

    printf("sizeArrayName1: %i\n",  sizeArrayName1);
    printf("sizeArrayName0: %i\n",  sizeArrayName0);

    char name2[20];
    name2[0] = 'c';
    name2[1] = ' ';
    name2[2] = 'd';
    //name2[3] = '\0';

    printf("%s\n", name);
    printf("%s\n", name2);

    printf("\n\n");
    int i =0;
    while(name[i] != '\0')
    {
        printf("%i - %c\n", i, name[i]);
        i++;
    }
    int sizeArrayName2 = sizeof(name2)/ sizeof(char);

    for(int j=0; j < sizeArrayName2; j++)
    {
        printf("%i - %c - %i - %d \n", j, name2[j], name2[j], name2[j]);
    }


    char name3[20];

    printf("podaj tekst:\n");
    scanf("%s", name3); ///getc getchar

    printf("wyswietlony tekst: %s\n", name3);

    int a,b;
    scanf("%i%i",&a,&b);
    printf("%i %i", a, b);

    return 0;
}
