#include <stdio.h>
#include <math.h>

#define MAX_LATI 10

struct Punto {
    float x, y;
};

struct Poligono {
    struct Punto vertici[MAX_LATI];
    int num_lati;
};

float dist(struct Punto p1, struct Punto p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    struct Poligono p;
    float perimetro = 0.0;

    printf("Numero lati (max %i): ", MAX_LATI);
    scanf("%i", &p.num_lati);

    for (int i = 0; i < p.num_lati; i++) {
        printf("Vertice %i (x y): ", i);
        scanf("%f %f", &p.vertici[i].x, &p.vertici[i].y);
    }

    // Calcolo perimetro sommando distanze i -> i+1
    for (int i = 0; i < p.num_lati; i++) {
        // (i+1) % num_lati permette di collegare l'ultimo punto al primo
        perimetro += dist(p.vertici[i], p.vertici[(i + 1) % p.num_lati]);
    }

    printf("Perimetro: %.2f\n", perimetro);
    return 0;
}