#include <stdio.h>

#define DIM 10

int main() {
    int sequenza[DIM];
    int x, i;
    int uguali = 0, minori = 0, maggiori = 0;

    printf("Inserisci %i numeri:\n", DIM);
    for (i = 0; i < DIM; i++) {
        scanf("%i", &sequenza[i]);
    }

    scanf("%i", &x);

    for (i = 0; i < DIM; i++) {
        if (sequenza[i] == x) {
            uguali++;
        } else if (sequenza[i] < x) {
            minori++;
        } else {
            maggiori++;
        }
    }

    printf("uguali: %i\n", uguali);
    printf("minori: %i\n", minori);
    printf("maggiori: %i\n", maggiori);

    return 0;
}