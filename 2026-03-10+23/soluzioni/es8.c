#include <stdio.h>

void rimpiazza(char str[], char c1, char c2) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] == c1) {
      str[i] = c2;
    }
    i++;
  }
}

int main() {
  char frase[200];
  char c1, c2;
  scanf(" %[^\n]", frase);
  scanf(" %c", &c1);
  scanf(" %c", &c2);
  rimpiazza(frase, c1, c2);
  printf("%s\n", frase);
  return 0;
}
