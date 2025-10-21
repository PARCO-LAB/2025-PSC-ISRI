#include <stdio.h>

int main() {
    // I/O
    char c;
    printf("Inserisci carattere minuscolo: ");
    scanf(" %c", &c);
    
    // Conversione da tabella ASCII
    char C = c - 'a' + 'A';

    // Stampa
    printf("Corrispondente maiuscolo: %c\n", C);
    
    return 0;
}