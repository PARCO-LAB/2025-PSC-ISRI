#include <stdio.h>

int* trova_minimo(int *arr, int dim) {
  if (dim == 0) return NULL;
  int *min = arr;
  for (int i = 1; i < dim; i++) {
    if (*(arr + i) < *min) {
      min = arr + i;
    }
  }
  return min;
}

int main() {
  int numeri[] = {8, 3, 9, 2, 5};
  int dim = sizeof(numeri) / sizeof(numeri[0]);
  int *min_ptr = trova_minimo(numeri, dim);
  if (min_ptr != NULL) {
    printf("Minimo trovato: %d\n", *min_ptr);
  }
  return 0;
}
