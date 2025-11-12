#include <stdio.h>

int main() {
    int g1, m1, a1, g2, m2, a2;
    printf("Inserisci data 1 (gg/mm/aaaa): ");
    scanf("%i/%i/%i", &g1, &m1, &a1);
    printf("Inserisci data 2 (gg/mm/aaaa): ");
    scanf("%i/%i/%i", &g2, &m2, &a2);

    // Confronto (Anno -> Mese -> Giorno)
    if (a1 < a2) {
        printf("La data 1 viene prima.\n");
    } else if (a1 > a2) {
        printf("La data 2 viene prima.\n");
    } else {
        // Anni uguali, controllo i mesi
        if (m1 < m2) {
            printf("La data 1 viene prima.\n");
        } else if (m1 > m2) {
            printf("La data 2 viene prima.\n");
        } else {
            // Mesi uguali, controllo i giorni
            if (g1 < g2) {
                printf("La data 1 viene prima.\n");
            } else if (g1 > g2) {
                printf("La data 2 viene prima.\n");
            } else {
                printf("Le date sono uguali.\n");
            }
        }
    }
    
    return 0;
}