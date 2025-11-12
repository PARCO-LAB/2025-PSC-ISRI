#include <stdio.h>

int main() {
    int n;
    printf("Inserisci un numero: ");
    scanf("%i", &n);

    if (n % 2 == 0) {
        printf("Il numero %i è pari.\n", n);
    } else {
        printf("Il numero %i è dispari.\n", n);
    }
    return 0;
}