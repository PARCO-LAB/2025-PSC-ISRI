#include <stdio.h>

int somma_cubi_cifre(int n) {
    int somma = 0;
    int temp = n;
    while (temp > 0) {
        int cifra = temp % 10;
        somma += (cifra * cifra * cifra);
        temp /= 10;
    }
    return somma;
}

int main() {
    int n;
    printf("Inserisci limite n: ");
    scanf("%i", &n);

    printf("Numeri che soddisfano la proprieta' minori di %i:\n", n);
    for (int i = 1; i < n; i++) {
        if (i == somma_cubi_cifre(i)) {
            printf("%i\n", i);
        }
    }
    return 0;
}