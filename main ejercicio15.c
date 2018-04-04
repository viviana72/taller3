#include <stdio.h>
#include <stdlib.h>
void pedirDatos();
void numeroMenor(int matriz[][100]);

int matriz[100][100], filas, columnas;


int main()
{
    pedirDatos();
    numeroMenor(matriz);

    return 0;
}

void pedirDatos(){
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

//hallamos el numero menor

void numeroMenor(int matriz[][100]){
    int menor = 999999;
    int filaEscogida;

    printf("ingrese el numero de fila a escoger\n");
    scanf("%d",&filaEscogida);

    for(int i=filaEscogida; i<=filaEscogida; i++){
        for(int j=0; j<columnas; j++){
            if(matriz [i][j]<menor){
                menor= matriz[i][j];
            }
        }
    }
        printf("el numero menor es: %d\n", menor);
}
