#include <stdio.h>

struct data {
    int g;
    int m;
    int a;
};

// Giorni per ogni mese (non bisestile, febbraio a 28)
int giorni_mese[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    struct data oggi;
    
    printf("Inserisci data (g m a): ");
    scanf("%i %i %i", &oggi.g, &oggi.m, &oggi.a);

    // Incremento giorno
    oggi.g++;

    // Controllo fine mese
    if (oggi.g > giorni_mese[oggi.m]) {
        oggi.g = 1;
        oggi.m++;
        
        // Controllo fine anno
        if (oggi.m > 12) {
            oggi.m = 1;
            oggi.a++;
        }
    }

    printf("Domani sara': %i/%i/%i\n", oggi.g, oggi.m, oggi.a);
    return 0;
}