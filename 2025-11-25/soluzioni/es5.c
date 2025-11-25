#include <stdio.h>

void stampa_triangolo(int h) {
    for (int i = 1; i <= h; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int h;
    scanf("%i", &h);
    stampa_triangolo(h);
    return 0;
}