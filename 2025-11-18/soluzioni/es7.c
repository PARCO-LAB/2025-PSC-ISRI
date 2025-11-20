#include <stdio.h>

int main() {
    int r, c;

    // Intestazione colonna X
    printf("  X");
    for (c = 0; c <= 10; c++) {
        printf("%3i", c);
    }
    printf("\n");

    // Corpo tabella
    for (r = 0; r <= 10; r++) {
        printf("%3i", r); // Intestazione riga
        for (c = 0; c <= 10; c++) {
            // Calcolo prodotto riga * colonna
            printf("%3i", r * c);
        }
        printf("\n");
    }

    return 0;
}