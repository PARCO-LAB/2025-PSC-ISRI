#include <stdio.h>

int main() {
    float v1, v2, v3;
    printf("Inserisci tre voti (separati da spazio): ");
    scanf("%f %f %f", &v1, &v2, &v3);

    float media = (v1 + v2 + v3) / 3.0;

    // Verificare la sufficienza
    if (media >= 18.0) {
        printf("Esame superato.\n");
    }
    
    return 0;
}