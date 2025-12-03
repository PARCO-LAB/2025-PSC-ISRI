#include <stdio.h>

#define DIM 5

int maxmin(int M[], int size) {
    int min = M[0];
    int max = M[0];
    int i;

    for (i = 1; i < size; i++) {
        if (M[i] < min) min = M[i];
        if (M[i] > max) max = M[i];
    }

    return max - min;
}

int main() {
    int numeri[DIM];
    int i;

    for (i = 0; i < DIM; i++) {
        scanf("%i", &numeri[i]);
    }

    printf("%i\n", maxmin(numeri, DIM));

    return 0;
}