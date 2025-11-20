#include <stdio.h>
#define DIM 10

int main() {
    float numeri[DIM];
    float somma = 0.0;
    float media;
    int conta_minori = 0;
    int i;

    printf("Inserisci %i numeri reali:\n", DIM);
    for (i = 0; i < DIM; i++) {
        scanf("%f", &numeri[i]);
        somma += numeri[i];
    }

    media = somma / DIM;
    
    for (i = 0; i < DIM; i++) {
        if (numeri[i] < media) {
            conta_minori++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Numeri minori della media: %i\n", conta_minori);

    return 0;
}