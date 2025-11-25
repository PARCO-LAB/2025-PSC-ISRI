#include <stdio.h>

// Funzione ausiliaria MCD (necessaria per mcm)
int calcola_mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    if (a == 0 || b == 0) 
        return 0;
    int prodotto = (int)a * b;
    if (prodotto < 0) 
        prodotto = -prodotto; 
    return (int)(prodotto / calcola_mcd(a, b));
}

int main() {
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%i %i", &a, &b);
    printf("mcm: %i\n", mcm(a, b));
    return 0;
}