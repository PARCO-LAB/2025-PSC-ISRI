#include <stdio.h>

float mediaCifre(int n) {
  int somma = 0;
  int count = 0;

  if (n < 0) {
    n = -n;
  }
  if (n == 0) {
    return 0.0f;
  }

  while (n > 0) {
    somma += n % 10;
    count++;
    n /= 10;
  }

  return (float)somma / count;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%.2f\n", mediaCifre(n));
  return 0;
}
