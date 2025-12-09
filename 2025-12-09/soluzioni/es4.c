#include <stdio.h>

int conta_cifre(int n) {
    // Caso base
    if (n < 10) 
        return 1;
    
    // Passo ricorsivo
    return 1 + conta_cifre(n / 10);
}

int main() {
    int x;
    scanf("%i", &x);
    printf("%i\n", conta_cifre(x));
    return 0;
}