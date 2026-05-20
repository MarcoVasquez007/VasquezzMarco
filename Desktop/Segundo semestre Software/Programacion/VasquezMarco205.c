
#include <stdio.h>
float calcular_promedio(float notas[], int tamaño);
int main() {
    float notas[]={6.5, 7.1, 8, 6, 5};
    float promedio=calcular_promedio(notas,5);
    printf("\nel promedio de las notas %.1f\n", promedio);
    return 0;
}
float calcular_promedio(float notas[], int tamaño){
    float suma=0;
    float promedio=0;
    for (int i=0; i<tamaño; i++){
        printf("nota %d: %.1f\n",i+1, notas[i]);
        suma = suma+notas[i];
    }
    promedio=suma/tamaño;
    return promedio;
}