#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void mayor(int dd, int mm, int aa, int dd1, int mm1, int aa1);
int dd=0,mm=0,aa=0,dd1=0,mm1=0,aa1=0;
int main()
{
    pedirDatos();
    mayor(dd,mm,aa,dd1,mm1,aa1);
    return 0;
}

void pedirDatos(){

    printf("ingrese la fecha dd/mm/aa \n");
    scanf("%d %d %d",&dd,&mm,&aa);
    printf("ingrse una nueva fecha dd/mm/aa \n");
    scanf("%d %d %d",&dd1,&mm1,&aa1);
}

void mayor(int dd, int mm, int aa, int dd1, int mm1, int aa1){
    if( aa>aa1||mm>mm1||dd>dd1){
        printf("la fecha mayor es: %d %d %d ",dd,mm,aa);

    }else{
    printf("la fecha mayor es: %d %d %d ",dd1,mm1,aa1);
    }
}
