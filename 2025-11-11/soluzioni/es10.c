#include <stdio.h>

int main() {
    int ore, minuti;
    printf("Inserisci l'orario in formato 24h (hh:mm): ");
    scanf("%i:%i", &ore, &minuti);

    int ore12 = ore;

    if (ore == 0) {
        ore12 = 12; // Mezzanotte (12 AM)
        printf("Orario convertito: %i:%.2i AM\n", ore12, minuti);
    }
    else if (ore < 12) { // Mattina
        printf("Orario convertito: %i:%.2i AM\n", ore12, minuti);
    } else if (ore == 12) { // Mezzogiorno (12 PM)
        printf("Orario convertito: %i:%.2i PM\n", ore12, minuti);
    } else {
        ore12 = ore - 12; // Pomeriggio
        printf("Orario convertito: %i:%.2i PM\n", ore12, minuti);
    }
 
    return 0;
}