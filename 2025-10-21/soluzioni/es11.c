#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    
    double gradi;
    
    printf("Inserisci angolo in gradi: ");
    scanf("%lf", &gradi);
    
    // Operazione
    double rad = gradi * PI / 180.0;
    
    printf("%.6f gradi corrispondono a %.6f radianti.\n", gradi, rad);
    
    return 0;
}