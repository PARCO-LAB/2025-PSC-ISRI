#include <stdio.h>

struct Punto {
    float x;
    float y;
};

struct Punto somma_punti(struct Punto p1, struct Punto p2) {
    struct Punto somma;
    somma.x = p1.x + p2.x;
    somma.y = p1.y + p2.y;
    return somma;
}

int main() {
    struct Punto p1, p2, ris;
    
    printf("Punto 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Punto 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    ris = somma_punti(p1, p2);
    printf("Punto Somma: (%.2f, %.2f)\n", ris.x, ris.y);
    return 0;
}