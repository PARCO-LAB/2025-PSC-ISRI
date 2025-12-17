/* es11_formula_giorni.c */
#include <stdio.h>

struct Data {
    int g, m, a;
};

// Funzione N secondo la formula data
int calcola_N(struct Data d) {
    int f, g_val;

    // Calcolo f(anno, mese)
    if (d.m <= 2) f = d.a - 1;
    else f = d.a;

    // Calcolo g(mese)
    if (d.m <= 2) g_val = d.m + 13;
    else g_val = d.m + 1;

    // Formula N
    return (1461 * f) / 4 + (153 * g_val) / 5 + d.g;
}

int main() {
    struct Data d1, d2;
    int n1, n2, diff;

    printf("Data 1 (g m a): ");
    scanf("%i %i %i", &d1.g, &d1.m, &d1.a);
    
    printf("Data 2 (g m a): ");
    scanf("%i %i %i", &d2.g, &d2.m, &d2.a);

    n1 = calcola_N(d1);
    n2 = calcola_N(d2);

    // Valore assoluto
    if (n1 > n2) 
        diff = n1 - n2;
    else 
        diff = n2 - n1;

    printf("Giorni trascorsi: %i\n", diff);
    return 0;
}