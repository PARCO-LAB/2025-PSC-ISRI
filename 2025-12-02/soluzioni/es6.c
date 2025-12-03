#include <stdio.h>

#define DIM 2

void merge(int A[], int B[], int C[], int size) {
    // i itera su A, j itera su B, k itera su C
    int i = 0, j = 0, k = 0;

    // Confronta e inserisci il minore finché entrambi gli array hanno elementi
    while (i < size && j < size) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    // Copia eventuali elementi rimanenti di A
    while (i < size) {
        C[k] = A[i];
        i++;
        k++;
    }

    // Copia eventuali elementi rimanenti di B
    while (j < size) {
        C[k] = B[j];
        j++;
        k++;
    }
}

int main() {
    int A[DIM], B[DIM];
    int C[DIM * 2];
    int i;

    for (i = 0; i < DIM; i++)
        scanf("%i", &A[i]);

    for (i = 0; i < DIM; i++) 
        scanf("%i", &B[i]);

    merge(A, B, C, DIM);

    for (i = 0; i < DIM * 2; i++) {
        printf("%i ", C[i]);
    }
    printf("\n");

    return 0;
}