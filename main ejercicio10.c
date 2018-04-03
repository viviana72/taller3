//realice una funcion que tome comom parametros un vector
//de numeros enteros y devuelva la suma de sus elementos

#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
int vect[100],tam;
int calcularSuma(int vect[], int tam);

int main()
{
    pedirDatos();
    printf("la suma del vector es %d\n",calcularSuma(vect,tam));


    return 0;
}
//pedimos los datos al usuario

void pedirDatos(){
    printf("ingrese el numero de elementos del vector\n");
    scanf("%d",&tam);

    for(int i=0; i<tam;i++){
        i+1;
        printf("digite un numero\n");
        scanf("%d",&vect[i]);
    }


}
//calculamos la suma del vector

int calcularSuma(int vect[], int tam){
    int suma=0;

    for(int i=0;i<tam;i++){
            suma+= vect[i];

    }
    return suma;
}

