#include <stdio.h>
#include <stdlib.h>

struct Point {
  int x;
  int y;
};

int main() {
  struct Point *p = (struct Point *)malloc(sizeof(struct Point));
  if (p == NULL) {
    printf("Errore allocazione\n");
    return 1;
  }

  scanf("%d %d", &p->x, &p->y);
  printf("(%d, %d)\n", p->x, p->y);

  free(p);
  p = NULL;
  return 0;
}
