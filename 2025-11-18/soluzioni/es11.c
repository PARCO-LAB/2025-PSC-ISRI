#include <stdio.h>
#define DIM 5 

int main() {
    float seq[DIM];
    float somma_totale = 0.0, media;
    int i;

    printf("Inserisci %i numeri reali:\n", DIM);
    for (i = 0; i < DIM; i++) {
        scanf("%f", &seq[i]);
        somma_totale += seq[i];
    }

    media = somma_totale / DIM;
    printf("Media sequenza: %.2f\n", media);
    printf("Terne con somma > media:\n");

    // Scorre fino a DIM-2 perché una terna parte al massimo terzultimo elemento
    for (i = 0; i < DIM - 2; i++) {
        float somma_terna = seq[i] + seq[i+1] + seq[i+2];
        
        if (somma_terna > media) {
            printf("[%.2f, %.2f, %.2f] Somma: %.2f\n", 
                   seq[i], seq[i+1], seq[i+2], somma_terna);
        }
    }

    return 0;
}