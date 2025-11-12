#include <stdio.h>

int main(void){
    int n, i = 1, j;
    printf("Inserisci n: ");
    scanf("%i", &n);

    while(i <= n){
        j = 1;
        while(j <= n){
            printf("(%2i,%2i) ", i, j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
