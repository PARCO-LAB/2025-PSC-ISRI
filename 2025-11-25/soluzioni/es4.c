#include <stdio.h>

int potenza(int base, int esponente) {
    int ris = 1;
    for (int i = 0; i < esponente; i++) {
        ris = ris * base;
    }
    return ris;
}

int main() {
    int b, e;
    printf("base: ");
    scanf("%i", &b);
    printf("esponente: ");
    scanf("%i", &e);

    printf("%i^%i = %i\n", b, e, potenza(b, e));
    return 0;
}