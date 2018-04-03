#include <stdio.h>
#include <stdlib.h>

void cambio(int dolares, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *uno);

int main()
{
    int dolares, cien=0, cincuenta=0, veinte=0, diez=0, cinco = 0, uno = 0;

    printf("ingrese la cantidad de dolares \n");
    scanf("%d",&dolares);

    cambio(dolares,&cien,&cincuenta,&veinte,&diez,&cinco,&uno);

    return 0;
}

void cambio(int dolares, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *uno){
    *cien = dolares / 100;
    dolares = dolares % 100;
    *cincuenta = dolares / 50;
    dolares = dolares % 50;
    *veinte = dolares /20;
    dolares = dolares % 20;
    *diez = dolares / 10;
    dolares = dolares %10;
    *cinco = dolares /5;
    dolares = dolares % 5;
    *uno = dolares;

    printf("Billetes de 100: %d\n", *cien);
    printf("Billetes de 50: %d\n", *cincuenta);
    printf("Billetes de 20: %d\n", *veinte);
    printf("Billetes de 10: %d\n", *diez);
    printf("Billetes de 5: %d\n", *cinco);
    printf("Billetes de 1: %d\n", *uno);

}
