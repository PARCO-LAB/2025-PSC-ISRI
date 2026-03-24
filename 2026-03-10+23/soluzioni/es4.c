#include <stdio.h>

int uguaglianza(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0' || s2[i] != '\0') {
    if (s1[i] != s2[i]) {
      return 0;
    }
    i++;
  }
  return 1;
}

int main() {
  char s1[100], s2[100];
  scanf("%99s", s1);
  scanf("%99s", s2);
  printf("%d\n", uguaglianza(s1, s2));
  return 0;
}
