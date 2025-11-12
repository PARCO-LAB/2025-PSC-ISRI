#include <stdio.h>

int main() {
    int anno;
    printf("Inserisci un anno: ");
    scanf("%i", &anno);

    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        printf("L'anno %i e' bisestile.\n", anno);
    } else {
        printf("L'anno %i non e' bisestile.\n", anno);
    }

    return 0;
}