#include <stdio.h>

int main() {
    float num, max;

    printf("Inserisci numeri (0 per terminare):\n");
    
    scanf("%f", &num);
    max = num;

    while (num != 0) {
        // Aggiornare il massimo
        if (num > max) {
            max = num;
        }
        // Leggere il numero successivo
        scanf("%f", &num);
    }
    
    printf("Il numero maggiore inserito è: %f\n", max);
    
    return 0;
}