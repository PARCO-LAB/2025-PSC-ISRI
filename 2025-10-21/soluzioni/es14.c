#include <stdio.h>

int main() {
    // I/O
    double N;
    printf("Inserisci N: ");
    scanf("%lf", &N);

    // Calcolo
    int parte_intera = (int) N;
    double parte_decimale = N - parte_intera;

    // Stampa
    printf("%i\n", parte_intera);
    printf("%lf\n", parte_decimale); 
    return 0;
}