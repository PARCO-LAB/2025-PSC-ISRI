#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; // 0 e 1 non sono primi
    
    // Controlla divisori da 2 fino a n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Trovato un divisore, non è primo
        }
    }
    return 1; // È primo
}

int main() {
    int n;
    scanf("%i", &n);

    printf("%i\n", isPrime(n));
    return 0;
}