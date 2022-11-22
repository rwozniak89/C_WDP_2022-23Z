#include <stdio.h>
#include <stdlib.h>

//5.	Napisz program, wykorzystuj¹cy po³¹czenie dzia³añ inkrementacja (post i pre) z przypisaniem dla:
//    „ *= , += ,  /= ,  -=  ”. Np. a += a+1; b += b++; c += ++c; d += d + 1 + d++;
//    Zapisz wnioski w komentarzach. „2.3” (0,5  pkt.).

int main()
{
    printf("Zad6!\n");

    int a5=5;
    int b5=5;

    printf("a5 *= : %d \n", a5 *= a5++); //a5_2 = a5_2 * a5_1; a5_1 = a5_1 + 1;
    printf("b5 *= : %d \n", b5 *= ++b5); //(b5 = b5 +1); b5 = b5 * b5;


    return 0;
}
