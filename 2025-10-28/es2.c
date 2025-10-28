#include <stdio.h>

int main(void){
    int N, sum = 0, i = 1;
    printf("Inserisci N: ");
    scanf("%i", &N);

    while(i <= N){
        sum += i;
        i++;
    }
    printf("Numero triangolare di %i = %i\n", N, sum);
    return 0;
}