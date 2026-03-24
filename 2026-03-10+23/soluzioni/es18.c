#include <stdio.h>

void rimuovi_spazi(char str[]) {
  int read = 0;
  int write = 0;
  while (str[read] != '\0') {
    if (str[read] != ' ' && str[read] != '\t' && str[read] != '\n') {
      str[write] = str[read];
      write++;
    }
    read++;
  }
  str[write] = '\0';
}

int main() {
  char frase[200];
  scanf(" %[^\n]", frase);
  rimuovi_spazi(frase);
  printf("%s\n", frase);
  return 0;
}
