#include <stdio.h>

int main() {
    int n;
    printf("Inserisci un numero a due cifre (10-99): ");
    scanf("%i", &n);

    if (n < 10 || n > 99) {
        printf("Errore: il numero non è valido.\n");
        return 1;
    }

    // Gestione dei casi speciali (10-19)
    if (n >= 10 && n <= 19) {
        switch (n) {
            case 10: printf("ten\n"); break;
            case 11: printf("eleven\n"); break;
            case 12: printf("twelve\n"); break;
            case 13: printf("thirteen\n"); break;
            case 14: printf("fourteen\n"); break;
            case 15: printf("fifteen\n"); break;
            case 16: printf("sixteen\n"); break;
            case 17: printf("seventeen\n"); break;
            case 18: printf("eighteen\n"); break;
            case 19: printf("nineteen\n"); break;
        }
    } else {
        // Gestione dei numeri 20-99
        int decine = n / 10;
        int unita = n % 10;

        // Switch per le decine
        switch (decine) {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }

        // Aggiunta delle unità (se diverse da 0)
        if (unita > 0) {
            printf("-"); // Spazio come da esempio "fifty nine"
            switch (unita) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
            }
        }
        printf("\n");
    }
    
    return 0;
}