//rellenar un array de 10 numeros, posteriormente indicar cuales son pares.

#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void pares(int vector[10]);

int vector[10];

int main()
{
    pedirDatos();
    pares(vector);

    return 0;
}

void pedirDatos(){
    for(int i=0; i<10; i++){
        printf("Ingrese un numero: \n");
        scanf("%d",&vector[i]);
    }

}

void pares(int vector[10]){
    for(int i=0; i<10; i++){
        if(vector[i]%2==0){
            printf("Es un numero par %d\n", vector[i]);
        }else{
            printf("El numero no es par %d\n", vector[i]);
        }
    }
}
