/* es12_equazione_secondo_grado.c */
#include <stdio.h>

// Radice quadrata manuale (Metodo di Newton/Babonese)
float radice_quadrata(float n) {
    if (n < 0) return -1.0;
    if (n == 0) return 0.0;
    float x = n;
    float y = 1.0;
    float e = 0.000001; // precisione
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

void risolvi_eq(float a, float b, float c) {
    float delta = (b * b) - (4 * a * c);
    
    if (delta < 0) {
        printf("Nessuna soluzione reale (Delta < 0).\n");
    } else {
        float radice_delta = radice_quadrata(delta);
        float x1 = (-b - radice_delta) / (2 * a);
        float x2 = (-b + radice_delta) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}

int main() {
    float a, b, c;
    printf("Inserisci a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        printf("Non e' di secondo grado.\n");
    } else {
        risolvi_eq(a, b, c);
    }
    return 0;
}