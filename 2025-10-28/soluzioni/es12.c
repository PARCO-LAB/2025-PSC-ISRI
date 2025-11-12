#include <stdio.h>

int main(void){
    int a;
    int n, k = 1;
    double res = 1.0;
    printf("Inserisci a: ");
    scanf("%i", &a);
    printf("Inserisci n: ");
    scanf("%i", &n);

    while(k <= n){
        res *= (double)(a - k + 1) / k;
        k++;
    }
    printf("(%.0lf)\n", res);
    return 0;
}