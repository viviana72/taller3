#include <stdio.h>
#include <stdlib.h>
void tiempo(int totalSeg,int *horas, int *min, int *seg);

int main()
{
    int totalSegundo, horas = 0, min = 0, seg = 0;
    printf("ingrese el total de segundos \n");
    scanf("%d",&totalSegundo);
    tiempo(totalSegundo,&horas,&min,&seg);
    return 0;
}

void tiempo(int totalSeg,int *horas, int *min, int *seg){
    *horas = totalSeg /3600;
    totalSeg = totalSeg %3600;
    *min = totalSeg / 60;
    totalSeg = totalSeg % 60;
    *seg = totalSeg;

    printf("el total de horas es: %d \n",*horas);
    printf("el total de minutos es: %d \n",*min);
    printf("el total de segundos es: %d \n",*seg);



}
