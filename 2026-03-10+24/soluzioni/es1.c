#include <stdio.h>

void stampa_stringa(char str[]) { printf("%s\n", str); }

int main() {
  char str[100];
  scanf("%99s", str);
  stampa_stringa(str);
  return 0;
}
