#include <stdio.h>

char char_piu_frequente(char str[]) {
  int freq[256] = {0};
  int i = 0;
  while (str[i] != '\0') {
    freq[(unsigned char)str[i]]++;
    i++;
  }

  char max_char = '\0';
  int max_freq = 0;
  for (int j = 0; j < 256; j++) {
    if (freq[j] > max_freq && j != '\0') {
      max_freq = freq[j];
      max_char = (char)j;
    }
  }
  return max_char;
}

int main() {
  char str[100];
  scanf("%99s", str);
  printf("%c\n", char_piu_frequente(str));
  return 0;
}
