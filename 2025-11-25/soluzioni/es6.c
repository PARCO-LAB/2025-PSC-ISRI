#include <stdio.h>

void stampa_rettangolo(int b, int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < b; j++) {
            // Stampa asterisco solo se siamo sul bordo
            if (i == 0 || i == h - 1 || j == 0 || j == b - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int b, h;
    scanf("%i %i", &h, &b);
    stampa_rettangolo(b, h);
    return 0;
}