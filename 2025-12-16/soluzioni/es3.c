#include <stdio.h>

struct Rettangolo {
    float base;
    float altezza;
};

float calcola_area(struct Rettangolo r) {
    return r.base * r.altezza;
}

int main() {
    struct Rettangolo rett;
    
    printf("Inserisci base e altezza: ");
    scanf("%f %f", &rett.base, &rett.altezza);

    printf("Area: %.2f\n", calcola_area(rett));
    return 0;
}