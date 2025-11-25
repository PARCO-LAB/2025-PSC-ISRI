#include <stdio.h>

int conta_multipli(int n, int m) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    printf("Inserisci n (limite) e m (divisore): ");
    scanf("%i %i", &n, &m);
    
    printf("Ci sono %i multipli.\n", conta_multipli(n, m));
    return 0;
}