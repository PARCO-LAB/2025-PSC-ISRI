#include <stdio.h>

int conta_spazi(char str[]) {
  int count = 0;
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == ' ') {
      count++;
    }
    i++;
  }
  return count;
}

int main() {
  char frase[200];
  scanf(" %[^\n]", frase);
  printf("%d\n", conta_spazi(frase));
  return 0;
}
