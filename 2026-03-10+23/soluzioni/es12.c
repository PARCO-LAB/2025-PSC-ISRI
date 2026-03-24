#include <stdio.h>

int conta_caratteri(char str[]) {
  int count = 0;
  while (str[count] != '\0')
    count++;
  return count;
}

void inserisci_sottostringa(char str[], char sub[], int pos) {
  int str_len = conta_caratteri(str);
  int sub_len = conta_caratteri(sub);
  if (pos > str_len)
    pos = str_len;
  if (pos < 0)
    pos = 0;

  // shift right
  for (int i = str_len; i >= pos; i--) {
    str[i + sub_len] = str[i];
  }
  // insert
  for (int i = 0; i < sub_len; i++) {
    str[pos + i] = sub[i];
  }
}

int main() {
  char str[200], sub[100];
  int pos;
  scanf("%99s", str);
  scanf("%99s", sub);
  scanf("%d", &pos);
  inserisci_sottostringa(str, sub, pos);
  printf("%s\n", str);
  return 0;
}
