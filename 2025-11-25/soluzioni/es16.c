#include <stdio.h>

int reverse_num(int n) {
    int invertito = 0;
    while (n > 0) {
        int cifra = n % 10;
        invertito = (invertito * 10) + cifra;
        n = n / 10;
    }
    return invertito;
}

int main() {
    int n;
    printf("Inserisci numero: ");
    scanf("%i", &n);
    printf("Inverso: %i\n", reverse_num(n));
    return 0;
}