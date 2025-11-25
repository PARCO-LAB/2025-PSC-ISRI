#include <stdio.h>

int is_multiplo(int a, int b) {
    if (b == 0) 
        return 0; // Evita divisione per zero
    if (a % b == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n1, n2;
    scanf("%i %i", &n1, &n2);

    printf("%i\n", is_multiplo(n1, n2));
    return 0;
}