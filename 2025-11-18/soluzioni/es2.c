#include <stdio.h>

int main() {
    // Indici da 0 a 10, viene usato da 1 a 10 per comodità
    int conteggio[11] = {0}; 
    int voto;

    printf("in: ");

    do {
        scanf("%i", &voto);
        conteggio[voto]++;
    } while(voto > 0 && voto <= 11);

    printf("out: ");
    for (int i = 1; i <= 10; i++) {
        // Stampa quantità per ogni voto
        printf("%i ", conteggio[i]);
    }
    printf("\n");

    return 0;
}