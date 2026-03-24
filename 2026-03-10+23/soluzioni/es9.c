#include <stdio.h>

int conta_parole() {
  char c;
  int words = 0;
  int in_word = 0;
  while ((c = getchar()) != '\n' && c != EOF) {
    if (c == ' ' || c == '\t') {
      in_word = 0;
    } else {
      if (in_word == 0) {
        words++;
        in_word = 1;
      }
    }
  }
  return words;
}

int main() {
  printf("%d\n", conta_parole());
  return 0;
}
