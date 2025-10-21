#include <stdio.h>

int main() {
    // Dichiarazione
    int A, B, somma;
    // Inserisco A
    printf("Inserisci A: ");
    scanf("%i", &A);
    // Inserisco B
    printf("Inserisci B: ");
    scanf("%i", &B);
    
    // Calcolo la somma
    somma = A + B;
    
    // Stampo il risultato
    printf("%i + %i = %i\n", A, B, somma);
    
    return 0;
}