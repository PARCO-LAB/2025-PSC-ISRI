#include <stdio.h>

int main() {
    int a, b;
    printf("Inserisci due interi (separati da spazio): ");
    scanf("%i %i", &a, &b);

    // Assegnazione del massimo usando l'operatore ternario
    int max = (a > b) ? a : b;

    printf("Il massimo è: %i\n", max);
    return 0;
}