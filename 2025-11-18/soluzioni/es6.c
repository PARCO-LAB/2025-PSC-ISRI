#include <stdio.h>

int main() {
    float A[2][2];
    float det;
    int r, c;

    printf("Inserisci i valori della matrice 2x2 (riga per riga):\n");
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("A[%i][%i]: ", r, c);
            scanf("%f", &A[r][c]);
        }
    }

    // Calcolo determinante: ad - bc
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("Determinante: %.2f\n", det);

    return 0;
}