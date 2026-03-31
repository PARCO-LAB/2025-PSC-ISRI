#include <stdio.h>

void conta_basi() {
  int count_A = 0, count_C = 0, count_G = 0, count_T = 0, count_U = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == 'A' || c == 'a')
      count_A++;
    else if (c == 'C' || c == 'c')
      count_C++;
    else if (c == 'G' || c == 'g')
      count_G++;
    else if (c == 'T' || c == 't')
      count_T++;
    else if (c == 'U' || c == 'u')
      count_U++;
  }
  printf("A: %d\n", count_A);
  printf("C: %d\n", count_C);
  printf("G: %d\n", count_G);
  printf("T: %d\n", count_T);
  printf("U: %d\n", count_U);
}

int main() {
  conta_basi();
  return 0;
}
