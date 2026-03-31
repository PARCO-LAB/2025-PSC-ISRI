#include <stdio.h>

void inverti_stringa(char *str) {
  char *end = str;
  while (*end != '\0') {
    end++;
  }
  if (end == str) return; // Stringa vuota
  end--; // Punta all'ultimo carattere prima del '\0'
  
  char tmp;
  while (str < end) {
    tmp = *str;
    *str = *end;
    *end = tmp;
    str++;
    end--;
  }
}

int main() {
  char testo[] = "Informatica";
  printf("Originale: %s\n", testo);
  inverti_stringa(testo);
  printf("Invertita: %s\n", testo);
  return 0;
}
