#include <math.h>
#include <stdio.h>

double fattoriale(int n) {
  if (n <= 1) {
    return 1.0;
  }
  return n * fattoriale(n - 1);
}

double costaylor(double a, int n) {
  if (n == 0) {
    return 1.0;
  }

  double termine = pow(-1.0, n) * pow(a, 2 * n) / fattoriale(2 * n);
  return termine + costaylor(a, n - 1);
}

int main() {
  double a;
  int n;
  double cos_taylor;
  double cos_libreria;
  double errore;

  do {
    scanf("%lf", &a);
  } while (!(a > 0.0 && a <= 2.0));

  scanf("%d", &n);

  cos_taylor = costaylor(a, n);
  cos_libreria = cos(a);
  errore = cos_taylor - cos_libreria;
  if (errore < 0) {
    errore = -errore;
  }

  printf("%.6f\n", cos_taylor);
  printf("%.6f\n", cos_libreria);
  printf("%.6f\n", errore);

  return 0;
}
