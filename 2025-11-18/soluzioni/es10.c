#include <stdio.h>

int main() {
    float A[3][3];
    float x, max_trovato;
    int r, c;
    int trovato = 0; // Per indicare se abbiamo trovato almeno un candidato

    printf("Inserisci matrice 3x3:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%f", &A[r][c]);
        }
    }

    printf("Inserisci numero X: ");
    scanf("%f", &x);

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            if (A[r][c] < x) {
                // Se è il primo valido trovato o se è maggiore del massimo attuale
                if (trovato == 0 || A[r][c] > max_trovato) {
                    max_trovato = A[r][c];
                    trovato = 1;
                }
            }
        }
    }

    if (trovato) {
        printf("Il maggiore tra gli elementi minori di %.2f e': %.2f\n", x, max_trovato);
    } else {
        printf("Nessun elemento minore di %.2f trovato.\n", x);
    }

    return 0;
}