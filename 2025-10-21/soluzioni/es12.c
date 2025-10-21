#include <stdio.h>

int main() {
    
    // Dichiarazione
    double kmh;
    
    // Input
    printf("Inserisci velocita' in km/h: ");
    scanf("%lf", &kmh);

    // Conversioni
    double ms = kmh * 1000.0 / 3600.0; 
    double mph = kmh * 0.64;
    
    // Output
    printf("%.3f km/h = %.3f m/s = %.3f mph\n", kmh, ms, mph);
    
    return 0;
}