#include <stdio.h>

void to_uppercase(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 'a' + 'A';
    }
    i++;
  }
}

int main() {
  char str[100];
  scanf("%99s", str);
  to_uppercase(str);
  printf("%s\n", str);
  return 0;
}
