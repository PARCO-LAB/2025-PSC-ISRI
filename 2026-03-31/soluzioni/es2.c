#include <stdio.h>

void increment(int *n) {
  (*n)++;
}

int main() {
  int val = 5;
  increment(&val);
  printf("Valore incrementato: %d\n", val);
  return 0;
}
