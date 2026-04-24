#include <stdio.h>
#include <stdlib.h>

int str_len(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

char *concat(char s1[], char s2[]) {
  int len1 = str_len(s1);
  int len2 = str_len(s2);

  char *res = (char *)malloc((len1 + len2 + 1) * sizeof(char));
  if (res == NULL) {
    return NULL;
  }

  for (int i = 0; i < len1; i++) {
    res[i] = s1[i];
  }
  for (int i = 0; i < len2; i++) {
    res[len1 + i] = s2[i];
  }
  res[len1 + len2] = '\0';

  return res;
}

int main() {
  char s1[100], s2[100];
  scanf("%99s", s1);
  scanf("%99s", s2);

  char *out = concat(s1, s2);
  if (out == NULL) {
    printf("Errore allocazione\n");
    return 1;
  }

  printf("%s\n", out);
  free(out);
  out = NULL;
  return 0;
}
