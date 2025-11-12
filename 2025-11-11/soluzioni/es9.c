#include <stdio.h>

int main() {
    int a, b;
    printf("Inserisci due interi (a b): ");
    scanf("%i %i", &a, &b);

    // Controllo per evitare la divisione per zero
    if (b == 0) {
        printf("Non è possibile dividere per zero.\n");
    } 
    // Controllo della divisibilità
    else if (a % b == 0) {
        printf("%i è divisibile per %i.\n", a, b);
    } else {
        printf("%i non è divisibile per %i.\n", a, b);
    }
    return 0;
}