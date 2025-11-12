#include <stdio.h>

int main(void){
    int n, i = 1;
    double sum = 1.0, fact = 1.0;
    printf("Inserisci n: ");
    scanf("%i", &n);

    while(i <= n){
        fact *= i;
        sum += 1.0 / fact;
        i++;
    }
    printf("Approssimazione di e: %.12lf\n", sum);
    return 0;
}