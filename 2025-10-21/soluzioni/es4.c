#include <stdio.h>

int main() {
    // Dichiarazione
    int i;
    float f;
    double d;
    char c;

    // Inserisco i valori
    printf("Inserisci un intero: ");
    scanf("%i", &i);
    printf("Inserisci un float: ");
    scanf("%f", &f);
    printf("Inserisci un double: ");
    scanf("%lf", &d);
    printf("Inserisci un char: ");
    scanf(" %c", &c); // Spazio per saltare caratteri extra

    // Stampo i valori
    printf("Il valore intero e': %i\n", i);
    printf("Il valore float e': %f\n", f);
    printf("Il valore double e': %lf\n", d);
    printf("Il valore char e': %c\n", c);
    
    return 0;
}