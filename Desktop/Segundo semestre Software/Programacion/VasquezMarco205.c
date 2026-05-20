#include <stdio.h>

float calcular_promedio(float *ptr, int tamano);

int main() {
    float notas[] = {6.5, 7.1, 8.0, 6.0, 5.0};
    
    float promedio = calcular_promedio(notas, 5);
    
    printf("\nEl promedio de las notas es: %.1f\n", promedio);
    return 0;
}

float calcular_promedio(float *ptr, int tamano) {
    float suma = 0;
    float promedio = 0;
    
    for (int i = 0; i < tamano; i++) {
        printf("Nota %d: %.1f\n", i + 1, ptr[i]);
        suma += ptr[i];
    }
    
    promedio = suma / tamano;
    return promedio;
}