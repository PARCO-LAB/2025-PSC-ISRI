#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0')
    count++;
  return count;
}

void concatena(char dest[], char s1[], char s2[]) {
  int i = 0;
  int j = 0;
  while (s1[i] != '\0') {
    dest[i] = s1[i];
    i++;
  }
  while (s2[j] != '\0') {
    dest[i] = s2[j];
    i++;
    j++;
  }
  dest[i] = '\0';
}

int main() {
  char s1[100], s2[100], res[200];
  scanf("%99s", s1);
  scanf("%99s", s2);
  concatena(res, s1, s2);
  printf("%s\n", res);
  return 0;
}
