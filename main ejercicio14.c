//desarrolle una funcion que determine si una matriz es simetrica o no

#include <stdio.h>
#include <stdlib.h>
//prototipo de funciones
void datos();
void simetrica(int matriz[][100],int filas, int columnas);


int matriz[100][100], filas, columnas;


int main()
{
    datos();
    simetrica(matriz,filas,columnas);

    system("pause");
    return 0;
}
//le indicamos al usuario que nos ingrese los datos

void datos(){
    printf("Ingrese la cantidad de filas de la matriz:\n");
    scanf("%d",&filas);
    printf("Ingrese la cantidad de columnas de la matriz:\n");
    scanf("%d",&columnas);

    for(int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("Digite un numero para la posicion: [%d] [%d] ", i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void simetrica(int matriz[][100], int filas, int columnas){
    int contador=0;
    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for (int j=0; j<columnas; j++){
                if(matriz[i][j]==matriz[j][i]){
                    contador++;
                }
            }
        }
    }
    if (contador==filas*columnas){
        printf("La matriz es simetrica\n");
    }else{
        printf("La matriz no es simetrica\n");
    }
}
