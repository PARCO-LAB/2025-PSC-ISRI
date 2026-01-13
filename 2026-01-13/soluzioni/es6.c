#include <stdio.h>

int main() {
    double arr[10];
    double sum = 0, media;
    
    printf("Inserisci 10 double:\n");
    for(int i=0; i<10; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    media = sum / 10.0;
    printf("Media: %.2f\n", media);

    // Inizializzazione con valori "impossibili" o flag
    double max_sotto = -1.0; 
    int flag_sotto = 0;
    
    double min_sopra = -1.0;
    int flag_sopra = 0;

    for(int i=0; i<10; i++) {
        if(arr[i] < media) {
            if(!flag_sotto || arr[i] > max_sotto) {
                max_sotto = arr[i];
                flag_sotto = 1;
            }
        }
        if(arr[i] > media) {
            if(!flag_sopra || arr[i] < min_sopra) {
                min_sopra = arr[i];
                flag_sopra = 1;
            }
        }
    }

    if(flag_sotto) printf("Il piu' grande sotto la media: %.2f\n", max_sotto);
    if(flag_sopra) printf("Il piu' piccolo sopra la media: %.2f\n", min_sopra);

    return 0;
}