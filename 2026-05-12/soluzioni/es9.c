#include <stdio.h>
#include <stdlib.h>

char *decode(int *v, int n) {
  char *out;
  int k = 0;

  out = (char *)malloc((n + 1) * sizeof(char));
  if (out == NULL) {
    return NULL;
  }

  for (int i = 0; i < n; i++) {
    int x = v[i];
    if ((x >= 65 && x <= 90) || x == 32) {
      out[k] = (char)x;
      k++;
    }
  }

  out[k] = '\0';
  return out;
}

int main() {
  int data[] = {10, 11, 72, 15, 27, 69, 13, 4, 76, 0, 26, 76, 97, 21, 98, 79, 105, 3, 32, 77, 48, 65, 84, 55, 69};
  int n = sizeof(data) / sizeof(data[0]);
  int *v;
  char *s;

  v = (int *)malloc(n * sizeof(int));
  if (v == NULL) {
    return 1;
  }

  for (int i = 0; i < n; i++) {
    v[i] = data[i];
  }

  s = decode(v, n);
  if (s == NULL) {
    free(v);
    return 1;
  }

  printf("%s\n", s);

  free(v);
  free(s);
  return 0;
}
