#include <stdio.h>

int main() {
    char arr[10];
    printf("Inserisci 10 caratteri:\n");
    for(int i=0; i<10; i++) 
        scanf(" %c", &arr[i]);

    printf("Output: ");
    for(int i=0; i<10; i++) {
        int gia_stampato = 0;
        // Controlla i precedenti
        for(int j=0; j<i; j++) {
            if(arr[j] == arr[i]) {
                gia_stampato = 1;
                break;
            }
        }
        if(!gia_stampato) {
            printf("%c ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}