#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0') {
    count++;
  }
  return count;
}

int palindroma(char str[]) {
  int len = conta_caratteri(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char str[100];
  scanf("%99s", str);
  printf("%d\n", palindroma(str));
  return 0;
}
