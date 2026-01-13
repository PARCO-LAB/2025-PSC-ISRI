#include <stdio.h>

// Convertire char in indice (A=0, C=1, G=2, T=3)
int get_idx(char c) {
    if (c == 'A') return 0;
    if (c == 'C') return 1;
    if (c == 'G') return 2;
    if (c == 'T') return 3;
    return -1;
}

void leggi(char arr[]) {
    printf("Inserisci 10 caratteri (A, C, G, T):\n");
    for (int i = 0; i < 10; i++) {
        char c;
        scanf(" %c", &c);

        while (get_idx(c) == -1) {
            printf("Carattere non valido. Reinserire: ");
            scanf(" %c", &c);
        }
        arr[i] = c;
    }
}

void matrice_frequenze(char arr[], int M[4][4]) {
    // Inizializza a 0
    for(int i=0; i<4; i++) 
        for(int j=0; j<4; j++) M[i][j] = 0;

    // Conta le coppie (elemento i seguito da i+1)
    for (int i = 0; i < 9; i++) {
        int riga = get_idx(arr[i]);
        int col = get_idx(arr[i+1]);
        M[riga][col]++;
    }
}

int max(int M[4][4]) {
    int m = M[0][0];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            if(M[i][j] > m) m = M[i][j];
    return m;
}

int min(int M[4][4]) {
    int m = M[0][0];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            if(M[i][j] < m) m = M[i][j];
    return m;
}

double media(int M[4][4]) {
    int sum = 0;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++) sum += M[i][j];
    return (double)sum / 16.0;
}

// Stampa array ordinato
void vettore(int M[4][4]) {
    int v[16];
    int k = 0;
    // Appiattisci matrice
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++) v[k++] = M[i][j];

    // Bubble Sort
    for (int i = 0; i < 16 - 1; i++) {
        for (int j = 0; j < 16 - i - 1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    
    printf("Vettore ordinato: ");
    for(int i=0; i<16; i++) printf("%i ", v[i]);
    printf("\n");
}

int main() {
    char seq[10];
    int mat[4][4];
    
    leggi(seq);
    matrice_frequenze(seq, mat);
    
    printf("Max frequenza: %i\n", max(mat));
    printf("Min frequenza: %i\n", min(mat));
    printf("Media frequenze: %.2f\n", media(mat));
    vettore(mat);
    
    return 0;
}