#include <stdio.h>

int main() {
    // Dichiarazione
    double a, b, c, delta;
    // Inserimento
    printf("Inserisci a: ");
    scanf("%lf", &a);
    printf("Inserisci b: ");
    scanf("%lf", &b);
    printf("Inserisci c: ");
    scanf("%lf", &c);
    // Calcolo determinante
    delta = b * b - 4.0 * a * c;
    // Stampo
    printf("Il determinante di %.2fx^2 + %.2fx + %.2f e' %.2f.\n", a, b, c, delta);
    return 0;
}