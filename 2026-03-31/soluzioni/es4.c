#include <stdio.h>

void sort(int *a, int *b, int *c) {
  int tmp;
  if (*a > *b) {
    tmp = *a;
    *a = *b;
    *b = tmp;
  }
  if (*a > *c) {
    tmp = *a;
    *a = *c;
    *c = tmp;
  }
  if (*b > *c) {
    tmp = *b;
    *b = *c;
    *c = tmp;
  }
}

int main() {
  int x, y, z;
  printf("Inserisci 3 interi: ");
  if (scanf("%d %d %d", &x, &y, &z) == 3) {
    sort(&x, &y, &z);
    printf("Ordine crescente: %d %d %d\n", x, y, z);
  } else {
    printf("Input non valido\n");
  }
  return 0;
}
