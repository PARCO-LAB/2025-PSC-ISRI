#include <stdio.h>

int main() {
    // Dichiarazione e inserimento
    int x, y;
    printf("Inserisci primo valore: ");
    scanf("%i", &x);
    printf("Inserisci secondo valore: ");
    scanf("%i", &y);

    // Come interi
    printf("%i + %i = %i\n", x, y, x + y);
    printf("%i - %i = %i\n", x, y, x - y);
    printf("%i * %i = %i\n", x, y, x * y);
    printf("%i / %i = %i\n", x, y, x / y);

    // Come float
    printf("%i + %i = %f\n", x, y, (float) x + y);
    printf("%i - %i = %f\n", x, y, (float) x - y);
    printf("%i * %i = %f\n", x, y, (float) x * y);
    printf("%i / %i = %f\n", x, y, (float) x / y);


    return 0;
}