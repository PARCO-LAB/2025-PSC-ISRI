#include <stdio.h>
#include <stdlib.h>

void change_array(int *v, int n) {
  for (int i = 0; i < n; i++) {
    if (v[i] % 2 != 0) {
      v[i] = 0;
    }
  }
}

int main() {
  int n;
  int *v;

  scanf("%d", &n);

  v = (int *)malloc(n * sizeof(int));
  if (v == NULL) {
    return 1;
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  change_array(v, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");

  free(v);
  return 0;
}
