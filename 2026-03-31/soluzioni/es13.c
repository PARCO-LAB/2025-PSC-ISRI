#include <stdio.h>

void replace_char(char *str, char old, char new_char) {
  while (*str != '\0') {
    if (*str == old) {
      *str = new_char;
    }
    str++;
  }
}

int main() {
  char testo[] = "banana";
  printf("Originale: %s\n", testo);
  replace_char(testo, 'a', 'o');
  printf("Trasformato: %s\n", testo);
  return 0;
}
