#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mati [10];
    int i;
    int mayor = -100;
    for(i=0;i<10;i++){
        printf("Ingresar un numero \n ");
        scanf("%d",&mati[i]);
        if (mati[i] > mayor){
            mayor = mati[i];
        }
    }
     printf("El mayor es %d \n",mayor);

}
