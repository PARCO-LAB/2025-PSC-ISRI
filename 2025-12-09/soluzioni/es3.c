#include <stdio.h>

int fact(int n) {
    // Caso base
    if (n <= 1) 
        return 1;
    
    // Passo ricorsivo
    return n * fact(n - 1);
}

int main() {
    int x;
    scanf("%i", &x);
    printf("%i\n", fact(x)); 
    return 0;
}