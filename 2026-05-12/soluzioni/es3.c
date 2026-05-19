#include <stdio.h>

int cifraMassima(int n) {
  int max = 0;

  if (n < 0) {
    n = -n;
  }

  while (n > 0) {
    int cifra = n % 10;
    if (cifra > max) {
      max = cifra;
    }
    n /= 10;
  }

  return max;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", cifraMassima(n));
  return 0;
}
