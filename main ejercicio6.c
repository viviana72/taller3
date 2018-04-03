#include <stdio.h>
#include <stdlib.h>

void cambio(int *numero1, int *numero2);

int main()
{
    int numero1 = 6; int numero2 =10;

    cambio(&numero1,&numero2);

    system("pause");
    return 0;
}

void cambio(int *numero1, int *numero2){
    int aux=0;
    aux=*numero1;
    *numero1=*numero2;
    *numero2=aux;

    printf("El nuevo valor de numero uno %d\n", *numero1);
    printf("El nuevo valor del numero dos %d\n", *numero2);
}
