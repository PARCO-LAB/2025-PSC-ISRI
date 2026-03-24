#include <stdio.h>

int conta_vocali(char str[]) {
  int count = 0;
  int i = 0;
  while (str[i] != '\0') {
    char c = str[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      count++;
    }
    i++;
  }
  return count;
}

int main() {
  char str[100];
  scanf("%99s", str);
  printf("%d\n", conta_vocali(str));
  return 0;
}
