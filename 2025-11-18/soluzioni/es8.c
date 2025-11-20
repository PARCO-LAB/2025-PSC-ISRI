#include <stdio.h>

#define DIM 5

int main() {
    float M[DIM][DIM];
    float somma_riga, somma_col;
    int r, c;

    printf("Inserisci la matrice %ix%i:\n", DIM, DIM);
    for (r = 0; r < DIM; r++) {
        for (c = 0; c < DIM; c++) {
            scanf("%f", &M[r][c]);
        }
    }

    // Somma righe
    for (r = 0; r < DIM; r++) {
        somma_riga = 0;
        for (c = 0; c < DIM; c++) {
            somma_riga += M[r][c];
        }
        printf("Somma riga %i: %.2f\n", r, somma_riga);
    }

    // Somma colonne
    for (c = 0; c < DIM; c++) {
        somma_col = 0;
        for (r = 0; r < DIM; r++) {
            somma_col += M[r][c];
        }
        printf("Somma colonna %i: %.2f\n", c, somma_col);
    }

    return 0;
}