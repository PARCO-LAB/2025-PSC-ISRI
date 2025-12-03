#include <stdio.h>

#define DIM 5

double media(double M[], int size) {
    double somma = 0.0;
    int i;
    
    for (i = 0; i < size; i++) {
        somma += M[i];
    }
    
    return somma / size;
}

int main() {
    double numeri[DIM];
    int i;

    for (i = 0; i < DIM; i++) {
        scanf("%lf", &numeri[i]);
    }

    printf("%.1f\n", media(numeri, DIM));

    return 0;
}