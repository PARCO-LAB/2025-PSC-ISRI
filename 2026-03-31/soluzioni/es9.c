#include <stdio.h>

void copy_string(char *s1, char *s2) {
  while (*s2 != '\0') {
    *s1 = *s2;
    s1++;
    s2++;
  }
  *s1 = '\0';
}

int main() {
  char src[] = "Hello World";
  char dest[50];
  copy_string(dest, src);
  printf("Stringa di destinazione: %s\n", dest);
  return 0;
}
