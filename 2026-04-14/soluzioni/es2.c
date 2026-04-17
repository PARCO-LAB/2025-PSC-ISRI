#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

struct node *find_element(struct node *list, int n) {
  struct node *current = list;
  while (current != NULL) {
    if (current->value == n) {
      return current;
    }
    current = current->next;
  }
  return NULL;
}

int main() {
  struct node A, B, C, D, E;
  int n;
  struct node *res;

  A.value = 7;
  B.value = 4;
  C.value = 12;
  D.value = 9;
  E.value = 1;

  A.next = &B;
  B.next = &C;
  C.next = &D;
  D.next = &E;
  E.next = NULL;

  scanf("%d", &n);
  res = find_element(&A, n);

  if (res != NULL) {
    printf("%d\n", res->value);
  } else {
    printf("NULL\n");
  }

  return 0;
}
