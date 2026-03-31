#include <stdio.h>

int lunghezza_stringa(char *str) {
  int count = 0;
  while (*str != '\0') {
    count++;
    str++;
  }
  return count;
}

int main() {
  char testo[] = "Programmazione";
  printf("La lunghezza di \"%s\" è: %d\n", testo, lunghezza_stringa(testo));
  return 0;
}
