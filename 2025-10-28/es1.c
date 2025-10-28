#include <stdio.h>

int main(void){
    int n, y, i = 1;
    printf("Inserisci n: ");
    scanf("%i", &n);
    printf("Fino a: ");
    scanf("%i", &y);

    while(i <= y){
        printf("%i x %i = %i\n", n, i, n * i);
        i++;
    }
    return 0;
}