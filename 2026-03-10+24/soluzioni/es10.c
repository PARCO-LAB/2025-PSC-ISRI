#include <stdio.h>

int sottomultipo(char str[], char sub[]) {
  int i = 0;
  if (sub[0] == '\0')
    return 1;
  while (str[i] != '\0') {
    int j = 0;
    while (str[i + j] == sub[j] && str[i + j] != '\0') {
      j++;
    }
    if (sub[j] == '\0') {
      return 1;
    }
    i++;
  }
  return 0;
}

int main() {
  char str[100], sub[100];
  scanf("%99s", str);
  scanf("%99s", sub);
  printf("%d\n", sottomultipo(str, sub));
  return 0;
}
