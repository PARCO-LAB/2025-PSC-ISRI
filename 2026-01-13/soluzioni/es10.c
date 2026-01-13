#include <stdio.h>
#define N 3 // Giudici
#define M 4 // Candidati

int main() {
    int voti[N][M] = {
        {1, 5, 2, 0},
        {2, 4, 1, 1},
        {5, 5, 5, 2}
    };

    // Trova candidato più brutto (Somma colonne massima)
    int max_bruttezza = -1;
    int id_candidato = -1;

    for (int j = 0; j < M; j++) { 
        int somma_voti = 0;
        for (int i = 0; i < N; i++) {
            somma_voti += voti[i][j];
        }
        if (somma_voti > max_bruttezza) {
            max_bruttezza = somma_voti;
            id_candidato = j;
        }
    }

    // Trova giudice più cattivo (Somma righe massima)
    int max_cattiveria = -1;
    int id_giudice = -1;

    for (int i = 0; i < N; i++) { 
        int somma_dati = 0;
        for (int j = 0; j < M; j++) {
            somma_dati += voti[i][j];
        }
        if (somma_dati > max_cattiveria) {
            max_cattiveria = somma_dati;
            id_giudice = i;
        }
    }

    printf("Candidato piu' brutto: %i (punti %i)\n", id_candidato, max_bruttezza);
    printf("Giudice piu' cattivo: %i (punti dati %i)\n", id_giudice, max_cattiveria);

    return 0;
}