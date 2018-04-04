#include <stdio.h>
#include <stdlib.h>
 //prototipo de funciones
void pedirDatos();
void nuevoSigno(int vect[],int tam);
int vect[100], tam;


int main()
{
    pedirDatos();
    nuevoSigno(vect, tam);

    return 0;
}
// pedir datos al usuario
void pedirDatos(){
    printf("digite el numero  del vetor\n");
    scanf("%d",&tam);
    for(int i=0;i<tam;i++){
        printf("ingrese un numero\n");
        scanf("%d",&vect[i]);
    }
}

// cambiamos el signo del vector
void nuevoSigno(int vect[],int tam){
    for (int i=0; i<tam; i++){
        vect[i] = vect[i]*-1;
    }
// imprimiendo funcion
for (int i=0; i<tam; i++){
    printf("El nuevo numero es: %d\n", vect[i]);
}
}
