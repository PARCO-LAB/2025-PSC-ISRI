#include <stdio.h>

void somma_due_array(int *arr1, int *arr2, int *arr_out, int dim) {
  for (int i = 0; i < dim; i++) {
    *(arr_out + i) = *(arr1 + i) + *(arr2 + i);
  }
}

int main() {
  int a1[] = {1, 2, 3};
  int a2[] = {10, 20, 30};
  int dim = 3;
  int a_out[3];

  somma_due_array(a1, a2, a_out, dim);

  printf("Array somma: ");
  for (int i = 0; i < dim; i++) {
    printf("%d ", a_out[i]);
  }
  printf("\n");
  return 0;
}
