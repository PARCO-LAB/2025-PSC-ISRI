#include <stdio.h>

int main(void){
    int n, rev = 0;
    printf("Inserisci un numero: ");
    scanf("%i", &n);

    while(n > 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("Numero invertito: %i\n", rev);
    return 0;
}