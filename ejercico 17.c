#include <stdio.h>
#include <stdlib.h>
 void numerosDecimales();

 float vector[]={32.583, 11.239, 45.781, 22.237};

int main()
{
    numerosDecimales();

    return 0;
}
//imprimiendo elementos del vector
void numerosDecimales(){
    for(int i=0; i<4; i++){
        printf("%1.3f\n",vector[i]);
    }
}
