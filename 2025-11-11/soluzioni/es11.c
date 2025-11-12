#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    printf("Inserisci quattro numeri (separati da spazio): ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Inizializziamo min e max al primo numero
    float min = n1;
    float max = n1;

    // n2
    if (n2 > max) 
    max = n2;
    if (n2 < min) 
    min = n2;
    
    // n3
    if (n3 > max) 
    max = n3;
    if (n3 < min) 
    min = n3;
    
    // n4
    if (n4 > max) 
        max = n4;
    if (n4 < min) 
        min = n4;

    printf("Minimo: %f\n", min);
    printf("Massimo: %f\n", max);
    
    return 0;
}