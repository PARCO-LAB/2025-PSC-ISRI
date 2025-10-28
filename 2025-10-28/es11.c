#include <stdio.h>

int main(void){
    int n, k = 1;
    double sum = 0.0;
    printf("Inserisci n: ");
    scanf("%i", &n);

    while(k <= n){
        sum += 1.0 / k;
        k++;
    }
    printf("Serie armonica fino a %i: %.5lf\n", n, sum);
    return 0;
}