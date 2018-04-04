#include <stdio.h>
#include <stdlib.h>
//prototipo de funciones

void pedirDatos();
void numerosImpares(int vect[], int tam);
int vect[100], tam;

int main()
{
    pedirDatos();
    numerosImpares(vect, tam);

    return 0;
}
//pedimos al usuario que ingrese los datos

void pedirDatos(){
    printf("digite el numero  del vetor\n");
    scanf("%d",&tam);
    for(int i=0;i<tam;i++){
        printf("ingrese un numero\n");
        scanf("%d",&vect[i]);
    }
}

//imprimiendo numeros impares

void numerosImpares(int vect[], int tam){
    for(int i=0;i<tam; i++){
        if(vect[i]%2==1){
            printf("numeros impares: %d\n ", vect[i]);
        }
    }
}

