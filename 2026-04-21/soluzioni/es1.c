#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(sizeof(int));
  if (p == NULL) {
    printf("Errore allocazione\n");
    return 1;
  }

  *p = 1;
  printf("%d\n", *p);

  free(p);
  p = NULL;
  return 0;
}
