#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0') {
    count++;
  }
  return count;
}

int main() {
  char str[100];
  scanf("%99s", str);
  printf("%d\n", conta_caratteri(str));
  return 0;
}
