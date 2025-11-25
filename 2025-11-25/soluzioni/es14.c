#include <stdio.h>

int isPrime(int n) {
    if (n < 2) 
        return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int next_prime(int last) {
    int candidato = last + 1;
    while (1) {
        if (isPrime(candidato)) {
            return candidato;
        }
        candidato++;
    }
}

int main() {
    int n;
    printf("Inserisci numero: ");
    scanf("%i", &n);
    printf("Il primo successivo e': %i\n", next_prime(n));
    return 0;
}