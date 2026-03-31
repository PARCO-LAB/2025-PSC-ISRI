#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(char *str) {
  char *end = str;
  while (*end != '\0') {
    end++;
  }
  end--;
  
  while (str < end) {
    if (*str != *end) {
      return false;
    }
    str++;
    end--;
  }
  return true;
}

int main() {
  char word1[] = "radar";
  char word2[] = "hello";
  
  printf("%s è palindroma? %s\n", word1, is_palindrome(word1) ? "Sì" : "No");
  printf("%s è palindroma? %s\n", word2, is_palindrome(word2) ? "Sì" : "No");
  return 0;
}
