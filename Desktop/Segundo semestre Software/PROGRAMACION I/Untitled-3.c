#include <stdio.h>

int main(){

    int n;
    printf(" Ingresa el numero de vector:  ");
    scanf("%d", & n);

    int vector1[n], i;

    for (i = 0; i < n / 2; i++){
        printf("Ingresa el numero %d: ", i+1);
        scanf("%d", &vector1[i]);

        printf("El vector es: %d \n", vector1[i]);
    }

}