#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

void split_prime(int src[], int n, int prime[], int *n_prime, int other[], int *n_other) {
  *n_prime = 0;
  *n_other = 0;

  for (int i = 0; i < n; i++) {
    if (is_prime(src[i])) {
      prime[*n_prime] = src[i];
      (*n_prime)++;
    } else {
      other[*n_other] = src[i];
      (*n_other)++;
    }
  }
}

void print_array(int v[], int n) {
  if (n == 0) {
    printf("vuoto\n");
    return;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  int n;
  int src[200];
  int prime[200];
  int other[200];
  int n_prime;
  int n_other;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &src[i]);
  }

  split_prime(src, n, prime, &n_prime, other, &n_other);

  print_array(prime, n_prime);
  print_array(other, n_other);
  return 0;
}
