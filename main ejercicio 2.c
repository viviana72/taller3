#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void al_cuadrado(float x);
float num;

int main()
{
    pedirDatos();
    al_cuadrado(num);

    return 0;
}

void pedirDatos(){
    printf("ingrese un numero \n");
    scanf("%f",&num);
}

void al_cuadrado(float x){
    float resultado=0;
    resultado=x*x;

    printf("el resultado es: %1.1f",resultado);

}
