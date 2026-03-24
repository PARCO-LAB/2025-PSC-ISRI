#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0')
    count++;
  return count;
}

void inverti(char str[]) {
  int len = conta_caratteri(str);
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }
}

int main() {
  char str[100];
  scanf("%99s", str);
  inverti(str);
  printf("%s\n", str);
  return 0;
}
