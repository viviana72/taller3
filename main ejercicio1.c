#include <stdio.h>
#include <stdlib.h>

void pedirDactos();
void mult(float a, float b);
float num1, num2;

int main()
{
    pedirDactos();
    mult(num1,num2);
    return 0;
}

void pedirDactos(){
    printf("ingrese dos numeros a multiplicar \n");
    scanf("%f %f",&num1,&num2);

}
void mult(float a, float b){
    float resultado=0;

    resultado = a * b;

    printf("el resultado es %1.1f\n",resultado);

}
