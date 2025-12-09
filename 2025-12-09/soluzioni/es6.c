#include <stdio.h>
#define DIM 4


void stampa_ricorsiva(int A[], int i, int size) {
    // Caso base
    if (i >= size) 
        return;
    
    printf("%i\n", A[i]);
    
    // Passo ricorsivo
    stampa_ricorsiva(A, i + 1, size);
}

int main() {
    int A[DIM];
    for(int i = 0; i < DIM; i++)
        scanf("%i",&A[i]);
    printf("---\n");
    stampa_ricorsiva(A, 0, DIM);
    return 0;
}