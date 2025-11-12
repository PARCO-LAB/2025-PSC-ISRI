#include <stdio.h>

int main(void){
    double base, result = 1.0;
    int exp, i = 0;
    printf("Base: ");
    scanf("%lf", &base);
    printf("Esponente (>=0): ");
    scanf("%d", &exp);

    while(i < exp){
        result *= base;
        i++;
    }

    printf("%.6lf ^ %i = %.6lf\n", base, exp, result);
    return 0;
}