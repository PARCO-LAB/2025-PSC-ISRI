#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0')
    count++;
  return count;
}

void elimina_sottostringa(char str[], char sub[]) {
  int i = 0;
  int sub_len = conta_caratteri(sub);
  if (sub_len == 0)
    return;
  while (str[i] != '\0') {
    int j = 0;
    while (str[i + j] == sub[j] && str[i + j] != '\0') {
      j++;
    }
    if (sub[j] == '\0') {
      int k = i;
      while (str[k + sub_len] != '\0') {
        str[k] = str[k + sub_len];
        k++;
      }
      str[k] = '\0';
    } else {
      i++;
    }
  }
}

int main() {
  char str[100], sub[100];
  scanf("%99s", str);
  scanf("%99s", sub);
  elimina_sottostringa(str, sub);
  printf("%s\n", str);
  return 0;
}
