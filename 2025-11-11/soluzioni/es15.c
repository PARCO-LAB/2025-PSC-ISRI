#include <stdio.h>

int main() {
    float a, b, c;
    printf("Inserisci i tre lati (separati da spazio): ");
    scanf("%f %f %f", &a, &b, &c);

    // Controllo 1: Lati positivi e disuguaglianza triangolare
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Errore: i lati non formano un triangolo valido.\n");
    } else {
        // Controllo 2: Classificazione del triangolo
        if (a == b && b == c) {
            printf("Triangolo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangolo isoscele.\n");
        } else {
            printf("Triangolo scaleno.\n");
        }
    }
    
    return 0;
}