#include <stdio.h>

int conta_cifre_divisori(int n) {
    int temp = n;
    int count = 0;
    
    while (temp > 0) {
        int cifra = temp % 10;
        
        // Evitare divisione per 0
        if (cifra != 0) {
            if (n % cifra == 0) {
                count++;
            }
        }
        
        temp = temp / 10;
    }
    return count;
}

int main() {
    int n;
    printf("Inserisci n: ");
    scanf("%i", &n);
    printf("Cifre che sono divisori: %i\n", conta_cifre_divisori(n));
    return 0;
}