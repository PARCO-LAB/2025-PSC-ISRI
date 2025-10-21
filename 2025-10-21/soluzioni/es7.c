#include <stdio.h>

int main() {
    // Dichiarazione
    char A, B, tmp;

    // Inserimento
    printf("Inserisci A: ");
    scanf(" %c", &A);
    printf("Inserisci B: ");
    scanf(" %c", &B);

    // Stampo lo stato dello stack
    printf("A : (%p, %c)\n", (void*)&A, A);
    printf("B : (%p, %c)\n", (void*)&B, B);
    
    // Scambio
    tmp = A;
    A = B;
    B = tmp;
    
    // Stampo lo stato dello stack
    printf("Scambio i valori:\n");
    printf("A : (%p, %c)\n", (void*)&A, A);
    printf("B : (%p, %c)\n", (void*)&B, B);
    
    return 0;
}