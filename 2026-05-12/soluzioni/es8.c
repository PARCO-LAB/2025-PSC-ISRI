#include <stdio.h>
#include <stdlib.h>

int *th_array(int *v, int n) {
  int th;
  int *out;

  scanf("%d", &th);

  out = (int *)malloc(n * sizeof(int));
  if (out == NULL) {
    return NULL;
  }

  for (int i = 0; i < n; i++) {
    if (v[i] < th) {
      out[i] = 0;
    } else {
      out[i] = 1;
    }
  }

  return out;
}

int main() {
  int n;
  int *v;
  int *out;

  scanf("%d", &n);
  v = (int *)malloc(n * sizeof(int));
  if (v == NULL) {
    return 1;
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  out = th_array(v, n);
  if (out == NULL) {
    free(v);
    return 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", out[i]);
  }
  printf("\n");

  free(v);
  free(out);
  return 0;
}
