#include <stdio.h>

#define DIM 10 // Direttiva pre-processing come suggerito

int main() {
    int numeri[DIM];
    int i;

    printf("in:\n", DIM);
    // Input
    for (i = 0; i < DIM; i++) {
        scanf("%i", &numeri[i]);
    }

    printf("out: ");
    // Stampa dal fondo all'inizio
    for (i = DIM - 1; i >= 0; i--) {
        printf("%i ", numeri[i]);
    }
    printf("\n");

    return 0;
}