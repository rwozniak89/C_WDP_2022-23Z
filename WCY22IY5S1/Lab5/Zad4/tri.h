#ifndef TRI_H_INCLUDED
#define TRI_H_INCLUDED

typedef struct {
    int a;
    int b;
    int c;
} triangle;

void wyswietlTriangle(triangle param1){
    printf("trojakt a:%d, b:%d, c:%d\n", param1.a, param1.b, param1.c);
}

#endif // TRI_H_INCLUDED
