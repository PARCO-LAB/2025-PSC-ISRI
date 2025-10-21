#include <stdio.h>

int main() {
    double F, C;
    printf("Inserisci temperatura in Fahrenheit: ");
    scanf("%lf", &F);
    C = (F - 32.0) / 1.8;
    printf("%f gradi Fahrenheit sono %.2f gradi Celsius.\n", F, C);
    return 0;
}