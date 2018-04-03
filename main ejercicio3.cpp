#include<stdlib.h>
#include <stdio.h>

using namespace std;
void pedirDatos();
void funpot(int a, int b);

int numero, exponente;
int main()
{
    pedirDatos();
    funpot(numero, exponente);

    return 0;
}

void pedirDatos(){
    printf("ingrese un numero \n");
    scanf("%d",&numero);
    printf("ingrese el exponente de elevacion\n");
    scanf("%d",&exponente);

}
void funpot(int a, int b){
    int resultado=1;
    for(int i=1;i<=b;i++){
        resultado= resultado*a;
    }
    printf("la resultado es: %d \n", resultado);
}

