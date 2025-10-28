#include <stdio.h>

int main(void){
    int x;
    int count = 0;
    printf("Inserisci un intero: ");
    scanf("%i", &x);

    do{
        x /= 10;
        count++;
    } while(x > 0);

    printf("Numero di cifre: %i\n", count);
    return 0;
}