/* es1_valore_assoluto.c */
#include <stdio.h>

// Definizione della funzione
int valore_assoluto(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

int main() {
    int numero;
    scanf("%i", &numero);

    int risultato = valore_assoluto(numero);
    printf("%i\n", risultato);

    return 0;
}