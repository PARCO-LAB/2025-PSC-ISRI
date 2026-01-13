#include <stdio.h>

#define R 3
#define C 3

int main() {
    int M[R][C] = {{1, 2, 3}, {1, 5, 2}, {7, 8, 9}}; 
    int count_ripetuti = 0;

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            int current = M[i][j];
            int occurrences = 0;
            
            // Conta quante volte current appare in tutta la matrice
            for(int k=0; k<R; k++) {
                for(int l=0; l<C; l++) {
                    if(M[k][l] == current) occurrences++;
                }
            }
            
            // Contare solo se è la prima occorrenza incontrata
            if(occurrences > 1) {
                int gia_visto = 0;
                // Controlla se è presente prima della posizione corrente (i, j)
                for(int k=0; k<=i; k++) {
                    int limit_col = (k == i) ? j : C;
                    for(int l=0; l<limit_col; l++) {
                        if(M[k][l] == current) gia_visto = 1;
                    }
                }
                if(!gia_visto) 
                    count_ripetuti++;
            }
        }
    }
    
    printf("Elementi che compaiono almeno due volte: %i\n", count_ripetuti);
    return 0;
}