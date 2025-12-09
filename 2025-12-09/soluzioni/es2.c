#include <stdio.h>

int sommatoria(int n) {
    // Caso base
    if (n <= 0) 
        return 0;
    
    // Passo ricorsivo
    return n + sommatoria(n - 1);
}

int main() {
    int x;
    scanf("%i", &x);
    printf("%i\n", sommatoria(x));
    return 0;
}