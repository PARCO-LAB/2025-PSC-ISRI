#include <stdio.h>

// Giorni in ogni mese (non bisestile)
// 1 = Gennaio, ..., 12 = Dicembre 
int giorni_mese[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Calcola il giorno dell'anno (da 1 a 365)
int giorno_assoluto(int g, int m) {
    int giorni = 0;
    for (int i = 1; i < m; i++) {
        giorni += giorni_mese[i];
    }
    giorni += g;
    return giorni;
}

int main() {
    int g1, m1, g2, m2;
    printf("Data 1 (g m): ");
    scanf("%i %i", &g1, &m1);
    printf("Data 2 (g m): ");
    scanf("%i %i", &g2, &m2);

    int abs1 = giorno_assoluto(g1, m1);
    int abs2 = giorno_assoluto(g2, m2);
    
    int diff = abs1 - abs2;
    if (diff < 0) 
        diff = -diff;

    printf("Giorni di differenza: %i\n", diff);
    return 0;
}