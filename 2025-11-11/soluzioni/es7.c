#include <stdio.h>

int main() {
    float n1, n2;
    char op;

    scanf("%f %c %f", &n1, &op, &n2);

    float risultato;

    // Lo switch è ideale per gestire i diversi operatori
    switch (op) {
        case '+':
            risultato = n1 + n2;
            printf("%f\n", risultato);
            break;
        case '-':
            risultato = n1 - n2;
            printf("%f\n", risultato);
            break;
        case '*':
            risultato = n1 * n2;
            printf("%f\n", risultato);
            break;
        case '/':
            // Aggiunta del controllo per evitare la divisione per 0
            if (n2 == 0) {
                printf("Errore: divisione per zero.\n");
            } else {
                risultato = n1 / n2;
                printf("%f\n", risultato);
            }
            break;
        // Gestione operatore non riconosciuto (come 'else')
        default:
            printf("Errore: operatore non riconosciuto.\n");
            break;
    }
    return 0;
}