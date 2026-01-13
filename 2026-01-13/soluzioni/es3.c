#include <stdio.h>

int main() {
    char arr[20];
    char c, r;
    
    printf("Inserisci 20 caratteri: ");
    for(int i=0; i<20; i++) 
        scanf(" %c", &arr[i]);

    printf("Inserisci carattere da trovare (c): ");
    scanf(" %c", &c);
    printf("Inserisci carattere sostitutivo (r): ");
    scanf(" %c", &r);

    for(int i=0; i<20; i++) {
        if(arr[i] == c) {
            arr[i] = r;
        }
    }

    printf("Risultato: ");
    for(int i=0; i<20; i++) printf("%c", arr[i]);
    printf("\n");
    return 0;
}