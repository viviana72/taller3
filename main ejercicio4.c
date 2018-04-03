#include <stdio.h>
#include <stdlib.h>

void pedirDatos();

void fracionario(float num);

float num;


int main()
{
    pedirDatos();
    fracionario(num);
    return 0;
}

void pedirDatos(){
    printf("ingrese un mumero decimal\n");
    scanf("%f",&num);
}

void fracionario(float num){
    while(num>1){
        num--;
           }
           printf("el resultado es %f", num);
}
