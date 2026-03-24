#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0')
    count++;
  return count;
}

void ordina_stringa(char str[]) {
  int len = conta_caratteri(str);
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (str[j] > str[j + 1]) {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
}

int main() {
  char str[100];
  scanf("%99s", str);
  ordina_stringa(str);
  printf("%s\n", str);
  return 0;
}
