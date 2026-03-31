#include <stdio.h>

void sum(double *s, double x, double y) {
  *s = x + y;
}

int main() {
  double x, y;
  double risultato;
  
  printf("Inserisci due numeri reali: ");
  if (scanf("%lf %lf", &x, &y) == 2) {
    sum(&risultato, x, y);
    printf("Somma: %f\n", risultato);
  } else {
    printf("Input non valido\n");
  }
  return 0;
}
