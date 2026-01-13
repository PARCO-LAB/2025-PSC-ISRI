#include <stdio.h>

int main() {
    char arr[20];
    int somma_cifre = 0;

    printf("Inserisci 20 caratteri: ");
    for(int i=0; i<20; i++) 
        scanf(" %c", &arr[i]);

    // Sostituzione
    for(int i=0; i<20; i++) {
        char c = arr[i];
        if(c == 'A' || c == 'a')      arr[i] = '1';
        else if(c == 'E' || c == 'e') arr[i] = '2';
        else if(c == 'I' || c == 'i') arr[i] = '3';
        else if(c == 'O' || c == 'o') arr[i] = '4';
        else if(c == 'U' || c == 'u') arr[i] = '5';
    }

    // Calcolo somma cifre presenti
    for(int i=0; i<20; i++) {
        if(arr[i] >= '0' && arr[i] <= '9') {
            somma_cifre += (arr[i] - '0'); // es: converte char '3' in int 3
        }
    }

    printf("Nuova stringa: ");
    for(int i=0; i<20; i++) 
        printf("%c", arr[i]);
    printf("\nSomma = %i\n", somma_cifre);

    return 0;
}