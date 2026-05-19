#include <stdio.h>

void fill_second_column(int a[][2], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i][0] % 3 == 0 || a[i][0] % 5 == 0) {
      a[i][1] = 1;
    } else {
      a[i][1] = 0;
    }
  }
}

int main() {
  int n;
  int a[200][2];
  int found = 0;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i][0]);
  }

  fill_second_column(a, n);

  for (int i = 0; i < n; i++) {
    if (a[i][1] == 1) {
      printf("%d ", a[i][0]);
      found = 1;
    }
  }

  if (!found) {
    printf("nessuno");
  }
  printf("\n");

  return 0;
}
