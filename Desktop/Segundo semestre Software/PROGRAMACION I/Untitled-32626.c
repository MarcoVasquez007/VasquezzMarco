#include <stdio.h>


int suma(int A, int B);
int sumatotal(int *ptrA, int *ptrB);

int main() {
  
    int A, B;
    int resultado_directo, resultado_punteros;
    

    printf("Introduce el valor de A: ");
    scanf("%d", &A);

    printf("Introduce el valor de B: ");
    scanf("%d", &B);

    
    resultado_directo = suma(A, B);
    printf("La suma directa de %d + %d es: %d\n", A, B, resultado_directo);

   
    resultado_punteros = sumatotal(&A, &B);
    printf("La suma usando punteros de %d + %d es: %d\n", A, B, resultado_punteros);

    return 0;
}


int suma(int A, int B) {
    return A + B;
}

int sumatotal(int *ptrA, int *ptrB) {
    
    return *ptrA + *ptrB;
}