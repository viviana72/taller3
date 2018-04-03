#include <stdio.h>
#include <stdlib.h>

void calc_anos(int dias, int *ano, int *mes, int *dia);

int main()
{

    int dias, ano = 0, mes = 0, dia = 0;

    printf("Ingrese los dias\n");
    scanf("%d",&dias);

    calc_anos(dias,&ano,&mes,&dia);


    return 0;
}

void calc_anos(int dias, int *ano, int *mes, int *dia){
    *ano = dias / 365;
    *ano = *ano + 2000;
    dias = dias % 365;
    *mes = dias / 30;
    *mes = *mes + 1;
    dias = dias % 30;
    *dia = dias;
    *dia = *dia + 1;

     printf("Ano: %d\n", *ano);
     printf("Mes: %d\n", *mes);
     printf("Dia: %d\n", *dia);
}
