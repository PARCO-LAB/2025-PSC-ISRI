#include <stdio.h>
#define N 10

struct Punto {
    float x, y;
};

int main() {
    struct Punto punti[N];
    float sum_x = 0.0, sum_y = 0.0;
    int i;

    printf("Inserisci %i punti:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%f %f", &punti[i].x, &punti[i].y);
        sum_x += punti[i].x;
        sum_y += punti[i].y;
    }

    printf("Baricentro: (%.2f, %.2f)\n", sum_x / N, sum_y / N);
    return 0;
}