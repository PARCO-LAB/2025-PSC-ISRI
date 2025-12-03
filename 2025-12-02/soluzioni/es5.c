#include <stdio.h>

#define DIM 3

void transposeMatrix(int M[DIM][DIM]) {
    int r, c, temp;
    
    for (r = 0; r < DIM; r++) {
        // Scorro solo la parte sopra la diagonale per evitare doppio scambio
        for (c = r + 1; c < DIM; c++) {
            temp = M[r][c];
            M[r][c] = M[c][r];
            M[c][r] = temp;
        }
    }
}

int main() {
    int matrice[DIM][DIM];
    int r, c;

    for (r = 0; r < DIM; r++) {
        for (c = 0; c < DIM; c++) {
            scanf("%i", &matrice[r][c]);
        }
    }

    transposeMatrix(matrice);

    printf("---\n");
    for (r = 0; r < DIM; r++) {
        for (c = 0; c < DIM; c++) {
            printf("%i ", matrice[r][c]);
        }
        printf("\n");
    }

    return 0;
}