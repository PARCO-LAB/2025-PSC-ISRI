#include <stdio.h>
#include <stdlib.h>

void minore(int *v, int n) {
  double somma = 0.0;
  double media;
  int count = 0;
  int *out;
  int k = 0;

  for (int i = 0; i < n; i++) {
    somma += v[i];
  }
  media = somma / n;

  for (int i = 0; i < n; i++) {
    if (v[i] < media) {
      count++;
    }
  }

  out = (int *)malloc((count > 0 ? count : 1) * sizeof(int));
  if (out == NULL) {
    return;
  }

  for (int i = 0; i < n; i++) {
    if (v[i] < media) {
      out[k] = v[i];
      k++;
    }
  }

  if (count == 0) {
    printf("vuoto");
  } else {
    for (int i = 0; i < count; i++) {
      printf("%d ", out[i]);
    }
  }
  printf("\n");

  free(out);
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

  minore(v, n);

  free(v);
  return 0;
}
