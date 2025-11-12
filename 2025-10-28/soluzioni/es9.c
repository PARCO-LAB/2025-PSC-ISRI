#include <stdio.h>

int main(void){
    int n, i = 2;
    int a = 0, b = 1, c;
    printf("Inserisci n: ");
    scanf("%i", &n);

    printf("%i", a);
    (n > 1) && printf(" %i", b);

    while(i < n){
        c = a + b;
        printf(" %i", c);
        a = b;
        b = c;
        i++;
    }
    printf("\n");
    return 0;
}
