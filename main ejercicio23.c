#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void menor(int vect[], int tam);
int vect[100],tam;

int main()
{
    pedirDatos();
    menor(vect,tam);

    return 0;
}

void pedirDatos(){
    printf("ingrese la cantidad de elementos del vector\n");
    scanf("%d",&tam);

    for(int i=0;i<tam;i++){
    printf("ingrese un numero\n");
    scanf("%d",&vect[i]);
    }
}

void menor(int vect[], int tam){
    int menor= 99999;

    for(int i=0;i<tam;i++){
        if(vect[i]<menor){
            menor=vect[i];
        }
    }
printf("el numero menor es: %d\n",menor);
}
