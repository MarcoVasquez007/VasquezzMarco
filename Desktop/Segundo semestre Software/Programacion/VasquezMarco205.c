#include <stdio.h>

int main() {
    float notas[] = {6.5, 7.1, 8, 6, 5};
    float suma = 0.0;
    float promedio;

    for (int i = 0; i < 5; i++) {
        printf("nota %d: %.1f\n", i + 1, notas[i]);
        suma += notas[i];
    }

    promedio = suma / 5;

    printf("\nEl promedio de las notas es: %.2f\n", promedio);

    return 0;
}