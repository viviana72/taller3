//pedirle al usuario que ingrese dos valores y de acuerdo a los valores ingresados,
//mostrar en patalla un arreglo de num1 x num2 que contega unos y ceros.

#include <stdio.h>
#include <stdlib.h>
 void pedirDatos();
 void matriz(int matriz [][100],int filas, int columnas);
 int num1, num2;
int main()
{
    pedirDatos();
    matriz(matriz [][100], num1, num2);

    return 0;
}
//pedirle al usuario los datos
void pedirDatos(){
    printf("ingrese dos valores");
    scanf("%d %d",&num1,&num2);
}
//mostrando un arreglo

void matriz(int matriz [][100],int filas, int columnas){
    for(int i=0; i<num1;i++){
        for(int j=0; j<num2; j++){
            printf("%d %d \n",num1,num2);
        }
    }
}

