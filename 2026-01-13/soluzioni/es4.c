#include <stdio.h>

int main() {
    int arr[20], ris[20];
    int somma_pari = 0;
    int somma_dispari = 0;

    printf("Inserisci 20 interi:\n");
    for(int i=0; i<20; i++) 
        scanf("%i", &arr[i]);

    for(int i=0; i<20; i++) {
        if (i % 2 == 0) {
            somma_pari += arr[i];
            ris[i] = somma_pari;
        } else {
            somma_dispari += arr[i];
            ris[i] = somma_dispari;
        }
    }

    printf("Array risultato:\n");
    for(int i=0; i<20; i++) 
        printf("%i ", ris[i]);
    printf("\n");
    return 0;
}