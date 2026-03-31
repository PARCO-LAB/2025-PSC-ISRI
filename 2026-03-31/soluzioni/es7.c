#include <stdio.h>

int* secondo_massimo(int *arr, int dim) {
  if (dim < 2) return NULL;
  
  int *max1 = arr;
  int *max2 = NULL;
  
  for (int i = 1; i < dim; i++) {
    if (*(arr + i) > *max1) {
      max2 = max1;
      max1 = arr + i;
    } else if (*(arr + i) < *max1 && (max2 == NULL || *(arr + i) > *max2)) {
      max2 = arr + i;
    }
  }
  return max2;
}

int main() {
  int numeri[] = {8, 3, 9, 8, 5};
  int dim = sizeof(numeri) / sizeof(numeri[0]);
  int *sec_max = secondo_massimo(numeri, dim);
  if (sec_max != NULL) {
    printf("Secondo massimo: %d\n", *sec_max);
  } else {
    printf("Secondo massimo non trovato (elementi insufficienti o tutti uguali)\n");
  }
  return 0;
}
