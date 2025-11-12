#include <stdio.h>

int main(void){
    int ndays, start, d = 1;
    printf("Numero giorni del mese: ");
    scanf("%d", &ndays);
    printf("Giorno inizio (1=lun...7=dom): ");
    scanf("%d", &start);

    printf(" Lun Mar Mer Gio Ven Sab Dom\n");

    int i = 1;
    while(i < start){
        printf("    ");
        i++;
    }

    while(d <= ndays){
        printf("%4i", d);
        ((start - 1 + d) % 7 == 0) && printf("\n");
        d++;
    }
    printf("\n");
    return 0;
}