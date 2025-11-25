#include <stdio.h>

void stampa_isoscele(int b) {
    if (b % 2 == 0 || b < 0) {
        printf("La base deve essere positiva e dispari.\n");
        return;
    }

    int altezza = (b / 2) + 1;

    for (int i = 0; i < altezza; i++) {
        // Stampa spazi iniziali
        for (int s = 0; s < (b / 2) - i; s++) {
            printf(" ");
        }
        // Stampa asterischi
        for (int k = 0; k < (2 * i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int b;
    scanf("%i", &b);
    stampa_isoscele(b);
    return 0;
}