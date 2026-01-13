#include <stdio.h>

#define POSTI 10

int main() {
    // 0 = vuoto, 1 = occupato
    int aereo[POSTI] = {0}; 
    int scelta, i;
    int posti_occupati = 0;

    while (posti_occupati < POSTI) {
        printf("\nDigitare 1 per 'Prima Classe'\n");
        printf("Digitare 2 per 'Economica'\n");
        printf("Scelta: ");
        scanf("%i", &scelta);

        int assegnato = 0; // Flag per verificare assegnazione

        if (scelta == 1) {
            // Cerca posto in Prima Classe (indici 0-4)
            for (i = 0; i < 5; i++) {
                if (aereo[i] == 0) {
                    aereo[i] = 1;
                    printf("Assegnato posto n. %i (Prima Classe)\n", i + 1);
                    assegnato = 1;
                    posti_occupati++;
                    break;
                }
            }
            if (!assegnato) printf("Reparto Prima Classe al completo.\n");
        } 
        else if (scelta == 2) {
            // Cerca posto in Economica (indici 5-9)
            for (i = 5; i < 10; i++) {
                if (aereo[i] == 0) {
                    aereo[i] = 1;
                    printf("Assegnato posto n. %i (Economica)\n", i + 1);
                    assegnato = 1;
                    posti_occupati++;
                    break;
                }
            }
            if (!assegnato) printf("Reparto Economica al completo.\n");
        } 
        else {
            printf("Scelta non valida.\n");
        }
    }
    
    printf("\nTutti i posti sono occupati!\n");
    return 0;
}