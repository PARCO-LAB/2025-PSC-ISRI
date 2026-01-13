#include <stdio.h>

#define N 6 

int main() {
    // Matrice esempio come da slide
    int M[N][N] = {
        {1, 2, 6, 7, 15, 16},
        {3, 5, 8, 14, 17, 26},
        {4, 9, 13, 18, 25, 27},
        {10, 12, 19, 24, 28, 33},
        {11, 20, 23, 29, 32, 34},
        {21, 22, 30, 31, 35, 36}
    };
    
    int out[N*N];
    int r = 0, c = 0, k = 0;
    
    // direzione: 1 = su-destra, 0 = giù-sinistra
    int up = 1; 

    while (k < N * N) {
        out[k++] = M[r][c];

        // SU-DESTRA
        if (up) {
            if (c == N - 1) { // Toccato bordo destro
                r++; 
                up = 0; // Cambia direzione
            } else if (r == 0) { // Toccato bordo alto
                c++; 
                up = 0; // Cambia direzione
            } else { // Movimento standard
                r--; 
                c++;
            }
        } 
        // GIU-SINISTRA
        else {
            if (r == N - 1) { // Toccato bordo basso
                c++; 
                up = 1; // Cambia direzione
            } else if (c == 0) { // Toccato bordo sinistro
                r++; 
                up = 1; // Cambia direzione
            } else { // Movimento standard
                r++; 
                c--;
            }
        }
    }

    // Stampa risultato
    printf("Output:\n");
    for (int i = 0; i < N * N; i++) {
        printf("%i ", out[i]);
    }
    printf("\n");

    return 0;
}