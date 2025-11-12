#include <stdio.h>

int main() {
    int g, m, a;
    printf("Inserisci data (gg/mm/aaaa): ");
    scanf("%i/%i/%i", &g, &m, &a);

    _Bool valida = 1;
    int giorni_mese;

    // Controllo anno (4 cifre) e mese (1-12)
    if (a < 1000 || a > 9999) 
        valida = 0;
    if (m < 1 || m > 12) 
        valida = 0;
    
    // Se anno e mese sono validi, controlliamo i giorni
    if (valida == 1) {
        // Costrutto switch per determinare i giorni massimi del mese
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                giorni_mese = 31;
                break;
            case 4: case 6: case 9: case 11:
                giorni_mese = 30;
                break;
            case 2:
                {
                    // Determiniamo se l'anno è bisestile
                    int bisestile = ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
                    if (bisestile) {
                        giorni_mese = 29;
                    } else {
                        giorni_mese = 28;
                    }
                }
                break;
        }

        // Controllo del giorno
        if (g < 1 || g > giorni_mese) {
            valida = 0;
        }
    }

    if (valida == 1) {
        printf("Data valida.\n");
    } else {
        printf("Data non valida.\n");
    }
    
    return 0;
}