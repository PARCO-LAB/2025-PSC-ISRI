#include <stdio.h>

void countdown(int n) {
    // Caso base: n negativo
    if (n < 0) return;

    printf("%i\n", n);
    
    // Passo ricorsivo
    countdown(n - 1);
}

int main() {
    int x;
    scanf("%i", &x);
    printf("---\n");
    countdown(x);
    return 0;
}