#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//constantes
#define MAX 6

//tipos de datos
typedef int tipovector[MAX];

//programa principal
int main ()
{
    int n, i, dado;
    tipovector v;
    double porc;
    time_t t;

    srand((unsigned) time(&t));
    printf ("\n       n        1        2        3        4        5        6");
    for (n=10; n<=1000000; n=n*10)
    {
        //inicializo los contadores
        for (i=0; i<MAX; i++)
            v[i] = 0;
        for (i=1; i<=n; i++)
        {
            //lanzo un dado y me da un numero entre 0 y 5
            dado = (int) (rand () % MAX);
            v[dado]++;
        }
        printf ("\n%8d", n);
        for (i=0; i<MAX; i++)
        {
            porc = (double)v[i] * 100 / n;
            printf (" %8.2lf", porc);
        }
    }
}