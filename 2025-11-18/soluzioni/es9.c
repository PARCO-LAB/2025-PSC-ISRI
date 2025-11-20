#include <stdio.h>
#define MAX 100

int main() {
    // setaccio[i] = 1 significa "potenzialmente primo", 0 significa "cancellato"
    int setaccio[MAX]; 
    int i, j;

    // Inizializzazione: tutti sono primi all'inizio (da 2 in poi)
    for (i = 0; i < MAX; i++) {
        setaccio[i] = 1;
    }

    // Algoritmo del Crivello
    for (i = 2; i * i < MAX; i++) {
        if (setaccio[i] == 1) {
            // Cancella i multipli
            for (j = i * i; j < MAX; j += i) {
                setaccio[j] = 0;
            }
        }
    }

    printf("Numeri primi minori di %i:\n", MAX);
    for (i = 2; i < MAX; i++) {
        if (setaccio[i] == 1) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}