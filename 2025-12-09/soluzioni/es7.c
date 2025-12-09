#include <stdio.h>
#define DIM 4

int trova_max(int A[], int size) {
    // Caso base
    if (size == 1) return A[0];
    
    // Passo ricorsivo
    int max_resto = trova_max(A, size - 1);
    
    // Confronto
    if (A[size - 1] > max_resto) {
        return A[size - 1];
    } else {
        return max_resto;
    }
}

int main() {
    int A[DIM];
    for(int i = 0; i < DIM; i++)
        scanf("%i",&A[i]);
    printf("%i\n", trova_max(A, 4));
    return 0;
}