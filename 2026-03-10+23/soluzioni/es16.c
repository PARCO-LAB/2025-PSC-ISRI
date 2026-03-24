#include <stdio.h>

void estrai(char dest[], char src[], int start, int len) {
  int i = 0;
  for (i = 0; i < len; i++) {
    if (src[start + i] == '\0') {
      break;
    }
    dest[i] = src[start + i];
  }
  dest[i] = '\0';
}

int main() {
  char str[100];
  char dest[100];
  int start, len;
  scanf("%99s", str);
  scanf("%d %d", &start, &len);
  estrai(dest, str, start, len);
  printf("%s\n", dest);
  return 0;
}
