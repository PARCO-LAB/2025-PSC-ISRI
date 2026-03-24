#include <stdio.h>

int uguali(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0' || s2[i] != '\0') {
    if (s1[i] != s2[i])
      return 0;
    i++;
  }
  return 1;
}

void elimina_ripetute(char str[]) {
  char words[50][100];
  int word_count = 0;

  int i = 0;
  int j = 0;
  char current_word[100];

  while (str[i] != '\0') {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      if (j > 0) {
        current_word[j] = '\0';
        int found = 0;
        for (int w = 0; w < word_count; w++) {
          if (uguali(words[w], current_word)) {
            found = 1;
            break;
          }
        }
        if (!found) {
          int w_len = 0;
          while (current_word[w_len] != '\0') {
            words[word_count][w_len] = current_word[w_len];
            w_len++;
          }
          words[word_count][w_len] = '\0';
          word_count++;
        }
        j = 0;
      }
    } else {
      current_word[j] = str[i];
      j++;
    }
    i++;
  }
  // Last word
  if (j > 0) {
    current_word[j] = '\0';
    int found = 0;
    for (int w = 0; w < word_count; w++) {
      if (uguali(words[w], current_word)) {
        found = 1;
        break;
      }
    }
    if (!found) {
      int w_len = 0;
      while (current_word[w_len] != '\0') {
        words[word_count][w_len] = current_word[w_len];
        w_len++;
      }
      words[word_count][w_len] = '\0';
      word_count++;
    }
  }

  // Reconstruct string
  int idx = 0;
  for (int w = 0; w < word_count; w++) {
    int k = 0;
    while (words[w][k] != '\0') {
      str[idx++] = words[w][k++];
    }
    if (w < word_count - 1) {
      str[idx++] = ' ';
    }
  }
  str[idx] = '\0';
}

int main() {
  char frase[500];
  scanf(" %[^\n]", frase);
  elimina_ripetute(frase);
  printf("%s\n", frase);
  return 0;
}
