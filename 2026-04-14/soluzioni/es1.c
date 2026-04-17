#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

void print_list(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
  printf("\n");
}

int main() {
  struct node A, B, C, D, E;

  A.value = 1;
  B.value = 2;
  C.value = 3;
  D.value = 4;
  E.value = 5;

  A.next = &B;
  B.next = &C;
  C.next = &D;
  D.next = &E;
  E.next = NULL;

  print_list(&A);
  return 0;
}
