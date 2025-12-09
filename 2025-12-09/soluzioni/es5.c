#include <stdio.h>

int potenza(int base, int exp) {
    // Caso base
    if (exp == 0) 
        return 1;
    
    // Passo ricorsivo
    return base * potenza(base, exp - 1);
}

int main() {
    int b,e;
    scanf("%i %i",&b,&e);
    printf("%i\n", potenza(b, e));
    return 0;
}