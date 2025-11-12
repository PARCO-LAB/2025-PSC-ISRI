#include <stdio.h>

int main(void){
    int N, i = 1;
    int fact = 1;
    printf("Inserisci N: ");
    scanf("%i", &N);

    while(i <= N){
        fact *= i;
        i++;
    }
    printf("%i! = %i\n", N, fact);
    return 0;
}