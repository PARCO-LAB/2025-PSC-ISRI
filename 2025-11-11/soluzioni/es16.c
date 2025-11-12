#include <stdio.h>

int main() {
    int kx, ky, qx, qy;
    printf("Posizione Re (x y): ");
    scanf("%i %i", &kx, &ky);
    printf("Posizione Regina (x y): ");
    scanf("%i %i", &qx, &qy);

    // Controllo 1: Validità coordinate (1-8)
    if (kx < 1 || kx > 8 || ky < 1 || ky > 8 || 
        qx < 1 || qx > 8 || qy < 1 || qy > 8) {
        printf("Errore: Posizioni non valide (fuori scacchiera 8x8).\n");
        return 1;
    }

    // Controllo 2: Posizioni diverse
    if (kx == qx && ky == qy) {
        printf("Errore: I pezzi sono nella stessa posizione.\n");
        return 1;
    }

    // Controllo 3: Cattura
    int dx = kx - qx; // Differenza x
    int dy = ky - qy; // Differenza y

    // Calcoliamo la distanza (valore assoluto)
    int dist_x = (dx > 0) ? dx : -dx;
    int dist_y = (dy > 0) ? dy : -dy;

    // Stessa riga (movimento orizzontale)
    if (ky == qy) {
        printf("Regina mangia Re: orizzontale, %i posizioni.\n", dist_x);
    } 
    // Stessa colonna (movimento verticale)
    else if (kx == qx) {
        printf("Regina mangia Re: verticale, %i posizioni.\n", dist_y);
    } 
    // Diagonale (valore assoluto di dx e dy è uguale)
    else if (dist_x == dist_y) {
        // (dx == dy || dx == -dy)
        printf("Regina mangia Re: diagonale, %i posizioni.\n", dist_x);
    }
    else {
        printf("La Regina non può mangiare il Re.\n");
    }

    return 0;
}