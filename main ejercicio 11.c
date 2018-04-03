#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void ordenarVector(int vect[], int tam);
int vect[100], tam;
int main()
{
    pedirDatos();
    ordenarVector(vect, tam);

    return 0;
}

void pedirDatos(){
    printf("digite el numero de elementos del vector\n");
    scanf("%d",&tam);

    for(int i=0;i<tam;i++){
    printf("ingrese un numero\n");
    scanf("%d",&vect[i]);

    }
}

void ordenarVector(int vect[], int tam){
int aux=1;
    for(int i=1;i<=tam;i++){
                if(vect[i]>=vect[i-1]){
                    aux++;
            }
    }
    if(aux==tam){
        printf("El vector esta ordenado\n");
    }else{
        printf("El vector no esta ordenado\n");
    }

}
