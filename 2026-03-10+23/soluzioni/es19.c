#include <stdio.h>

void parola_piu_lunga(char str[], char dest[]) {
  int max_len = 0;
  int current_len = 0;
  int max_start = 0;
  int current_start = 0;

  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      if (current_len > max_len) {
        max_len = current_len;
        max_start = current_start;
      }
      current_len = 0;
      current_start = i + 1;
    } else {
      current_len++;
    }
    i++;
  }
  if (current_len > max_len) {
    max_len = current_len;
    max_start = current_start;
  }

  for (int j = 0; j < max_len; j++) {
    dest[j] = str[max_start + j];
  }
  dest[max_len] = '\0';
}

int main() {
  char frase[500];
  char parola[100];
  scanf(" %[^\n]", frase);
  parola_piu_lunga(frase, parola);
  printf("%s\n", parola);
  return 0;
}
