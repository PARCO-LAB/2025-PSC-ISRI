#include <stdio.h>

int calcola_mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%i %i", &a, &b);
    printf("MCD: %i\n", calcola_mcd(a, b));
    return 0;
}