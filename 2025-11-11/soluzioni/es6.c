#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);

    // Controllo se è una cifra (basato sui valori ASCII)
    if (c >= '0' && c <= '9') {
        printf("cifra\n");
    } 
    // Controllo se è alfabetico (minuscolo O maiuscolo)
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("carattere alfabetico\n");
    } 
    // Se non è nessuno dei precedenti
    else {
        printf("carattere speciale\n");
    }
    return 0;
}