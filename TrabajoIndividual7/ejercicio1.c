#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>



int sumarcifras (int n);


int main()
{
    char c;


    int n, suma;

    do
    {
        system("cls");
        printf("programeitor\n");
        printf("====================================\n\n");


        //como pide un numero natural tiene que ser mayor o igual a 0
        do
        {
            printf ("\nIntroduce numero natural: ");
            scanf (" %d", &n);
        } while (n < 0);
        suma = sumarcifras (n);  //int sumarcifras (int n)
        printf ("\nLa suma de las cifras es: %d", suma);
        





        printf("\n\nDesea efectuar una nueva operacion (s/n)? ");
        c=toupper(getchar());
    }
    while (c!='N');
    return 0;
}


int sumarcifras (int n)
{
    if (n == 0)
        return 0;
    else
        return n%10 + sumarcifras(n/10);
}