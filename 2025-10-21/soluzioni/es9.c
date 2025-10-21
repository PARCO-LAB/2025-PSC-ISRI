#include <stdio.h>

int main() {
    // Inserimento N
    int N;
    printf("Inserisci N: ");
    scanf("%i", &N);
    // Calcolo e stampo la somma
    int sum = N * (N + 1) / 2;
    printf("La somma dei primi %i numeri interi e' %i.\n", N, sum);
    
    return 0;
}