/* es15_radice_quadrata.c */
#include <stdio.h>

void stampa_radice(int n) {
    if (n < 0) {
        printf("Errore: numero negativo.\n");
        return;
    }
    
    // Algoritmo di Newton per approssimazione
    float x = n;
    float y = 1.0;
    float e = 0.00001;
    
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    
    printf("Radice di %i: %.4f\n", n, x);
}

int main() {
    int n;
    printf("Inserisci un intero positivo: ");
    scanf("%i", &n);
    stampa_radice(n);
    return 0;
}