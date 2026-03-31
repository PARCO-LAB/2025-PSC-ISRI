#include <stdio.h>

int somma_array(int *arr, int dim) {
  int sum = 0;
  for (int i = 0; i < dim; i++) {
    sum += *(arr + i);
  }
  return sum;
}

int main() {
  int numeri[] = {1, 2, 3, 4, 5};
  int dim = sizeof(numeri) / sizeof(numeri[0]);
  printf("Somma array: %d\n", somma_array(numeri, dim));
  return 0;
}
