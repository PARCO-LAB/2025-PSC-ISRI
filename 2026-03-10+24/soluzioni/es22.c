#include <stdio.h>

void istogramma(char str[]) {
  int freq[256] = {0};
  int i = 0;
  while (str[i] != '\0') {
    freq[(unsigned char)str[i]]++;
    i++;
  }

  for (int j = 0; j < 256; j++) {
    if (freq[j] > 0 && j != ' ' && j != '\t' && j != '\n') {
      printf("%c: ", j);
      for (int k = 0; k < freq[j]; k++) {
        printf("*");
      }
      printf("\n");
    }
  }
}

int main() {
  char frase[500];
  scanf(" %[^\n]", frase);
  istogramma(frase);
  return 0;
}
