#include <stdio.h>

#define DIM 5

int main() {
    int numeri[DIM];
    int somma = 0;
    int conta_validi = 0;
    int i;

    printf("in: ");
    for (i = 0; i < DIM; i++) {
        scanf("%i", &numeri[i]);
    }

    for (i = 0; i < DIM; i++) {
        if (numeri[i] % 3 == 0) {
            numeri[i] = 0;
        } else {
            somma += numeri[i];
            conta_validi++;
        }
    }

    // Stampa media float
    printf("out: %.2f\n", (float) somma  / conta_validi);
    

    return 0;
}