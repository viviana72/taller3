#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void maximo(int a, int b, int c);

int a, b, c;

int main()
{
    pedirDatos();
    maximo(a,b,c);

    return 0;
}
 void pedirDatos(){
     printf("ingrese tres numeros\n");
     scanf("%d %d %d",&a,&b,&c);
 }
 void maximo(int a, int b, int c){
     if (a>b&&a>c){
        printf("El valor mayor es %d", a);
     }else if(b>a&&b>c){
         printf("El valor mayor es %d", b);
     }else if(c>a&&c>b){
         printf("El valor mayor es %d", c);
     }
 }
