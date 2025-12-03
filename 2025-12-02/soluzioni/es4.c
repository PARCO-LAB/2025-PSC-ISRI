#include <stdio.h>

#define DIM 5

void somma_cumulativa(int M[], int size) {
    int i;
    // Si parte da 1 perché il primo elemento resta uguale
    for (i = 1; i < size; i++) {
        M[i] = M[i] + M[i-1];
    }
}

int main() {
    int numeri[DIM];
    int i;

    for (i = 0; i < DIM; i++) {
        scanf("%i", &numeri[i]);
    }

    somma_cumulativa(numeri, DIM);

    for (i = 0; i < DIM; i++) {
        printf("%i ", numeri[i]);
    }
    printf("\n");

    return 0;
}