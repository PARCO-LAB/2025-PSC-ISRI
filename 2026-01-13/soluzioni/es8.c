#include <stdio.h>
#define D1 3
#define D2 3

int main() {
    int M[D1][D2] = {{1, 2, 3}, {4, 2, 6}, {2, 8, 9}};  // Matrice di esempio
    int x, count = 0;

    printf("Inserisci numero da cercare x: ");
    scanf("%i", &x);

    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            if(M[i][j] == x) count++;
        }
    }
    printf("Il numero %i compare %i volte.\n", x, count);
    return 0;
}