#include <math.h>
#include <stdio.h>

double fattoriale(int n) {
  if (n <= 1) {
    return 1.0;
  }
  return n * fattoriale(n - 1);
}

double sintaylor(double a, int n) {
  if (n == 0) {
    return a;
  }

  double termine = pow(-1.0, n) * pow(a, 2 * n + 1) / fattoriale(2 * n + 1);
  return termine + sintaylor(a, n - 1);
}

int main() {
  double a;
  int n;
  double seno_taylor;
  double seno_libreria;
  double errore;

  do {
    scanf("%lf", &a);
  } while (!(a > 0.0 && a <= 2.0));

  scanf("%d", &n);

  seno_taylor = sintaylor(a, n);
  seno_libreria = sin(a);
  errore = seno_taylor - seno_libreria;
  if (errore < 0) {
    errore = -errore;
  }

  printf("%.6f\n", seno_taylor);
  printf("%.6f\n", seno_libreria);
  printf("%.6f\n", errore);

  return 0;
}
