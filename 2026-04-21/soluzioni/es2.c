#include <stdio.h>
#include <stdlib.h>

int main() {
  int *v = (int *)malloc(10 * sizeof(int));
  if (v == NULL) {
    printf("Errore allocazione\n");
    return 1;
  }

  for (int i = 0; i < 10; i++) {
    v[i] = 1;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");

  free(v);
  v = NULL;
  return 0;
}
