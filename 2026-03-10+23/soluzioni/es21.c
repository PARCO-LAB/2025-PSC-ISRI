#include <stdio.h>

int uguali(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0' || s2[i] != '\0') {
    if (s1[i] != s2[i])
      return 0;
    i++;
  }
  return 1;
}

int conta_occorrenze(char str[], char parola[]) {
  int i = 0;
  int j = 0;
  int count = 0;
  char current_word[100];

  while (str[i] != '\0') {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      if (j > 0) {
        current_word[j] = '\0';
        if (uguali(current_word, parola)) {
          count++;
        }
        j = 0;
      }
    } else {
      current_word[j] = str[i];
      j++;
    }
    i++;
  }
  if (j > 0) {
    current_word[j] = '\0';
    if (uguali(current_word, parola)) {
      count++;
    }
  }
  return count;
}

int main() {
  char frase[500];
  char parola[100];
  scanf(" %[^\n]", frase);
  scanf("%99s", parola);
  printf("%d\n", conta_occorrenze(frase, parola));
  return 0;
}
