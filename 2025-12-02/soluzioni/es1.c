#include <stdio.h>

#define DIM 5

double trova_minimo(double A[], int size) {
    double min = A[0];
    int i;
    
    for (i = 1; i < size; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    return min;
}

int main() {
    double numeri[DIM];
    int i;

    for (i = 0; i < DIM; i++) {
        scanf("%lf", &numeri[i]);
    }

    double minimo = trova_minimo(numeri, DIM);
    printf("%.2f\n", minimo);

    return 0;
}