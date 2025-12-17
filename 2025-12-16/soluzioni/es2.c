#include <stdio.h>

struct data {
    int g, m, a;
};

// Restituisce 1 se d1 > d2, altrimenti 0
int is_maggiore(struct data d1, struct data d2) {
    if (d1.a > d2.a) return 1;
    if (d1.a < d2.a) return 0;
    
    // Anno uguale, controllo mese
    if (d1.m > d2.m) return 1;
    if (d1.m < d2.m) return 0;
    
    // Mese uguale, controllo giorno
    if (d1.g > d2.g) return 1;
    
    return 0;
}

int main() {
    struct data d1, d2;
    
    printf("Data 1 (g m a): ");
    scanf("%i %i %i", &d1.g, &d1.m, &d1.a);
    
    printf("Data 2 (g m a): ");
    scanf("%i %i %i", &d2.g, &d2.m, &d2.a);

    if (is_maggiore(d1, d2)) {
        printf("La data successiva e': %i/%i/%i\n", d1.g, d1.m, d1.a);
    } else {
        printf("La data successiva e': %i/%i/%i\n", d2.g, d2.m, d2.a);
    }

    return 0;
}