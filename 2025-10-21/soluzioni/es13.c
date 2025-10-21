#include <stdio.h>

int main() {
    double soldi;
    printf("Inserisci soldi a disposizione (euro): ");
    scanf("%lf", &soldi);

    // Conversione in centesimi e arrotondamento al centesimo inferiore
    int cents = (int) (soldi * 100);
    int prezzo = 40;

    // Calcolo bottiglie e resto
    int bottiglie = cents / prezzo;
    int resto = cents - bottiglie * prezzo;

    // Stampo bottiglie e resto
    printf("Bottigliette acquistabili: %i\n", bottiglie);
    printf("Resto (cent): %i\n", resto);

    // Calcolo divisione del resto in centesimi
    int n20 = resto / 20; 
    resto %= 20;
    int n10 = resto / 10; 
    resto %= 10;
    int n5 = resto / 5; 
    resto %= 5;
    int n1 = resto;

    // Stampo distribuzione resto
    printf("Restituire: %i x 20c, %i x 10c, %i x 5c, %i x 1c\n", n20, n10, n5, n1);
    return 0;
}