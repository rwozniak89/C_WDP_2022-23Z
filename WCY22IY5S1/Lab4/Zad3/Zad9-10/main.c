#include <stdio.h>
#include <stdlib.h>

//9.	Napisz funkcj� zwracaj�c� �redni� warto�� liczb zawartych w tablicy wej�ciowej. (0,5 pkt.) �5.5�
//10.	Napisz funkcj� zwracaj� �rodkow� warto�� z tablicy wej�ciowej. (0,5 pkt.) �5.6�


int* getMeanValueFromArray(int arr[], int size){   ///int* arr
    for(int i = 0; i < size; i++)
    {
        printf("index = %i, value = %d\n", i, arr[i]);
        //sum+= xxxx.....
    }
    // sum/size;
    arr[0] = 111;
    *(arr+1) = 112;
    return arr;
}

int main()
{
    printf("Zad 9.!\n");


    int tab[] = {1,2,3,55};
    int rozmiar = 4; //sizeof....

    int* tablicaWsk = getMeanValueFromArray(tab, rozmiar);



    for(int i = 0; i < rozmiar; i++)
    {
        printf("index = %i, value = %d\n", i, tablicaWsk[i]);
    }

    return 0;
}
