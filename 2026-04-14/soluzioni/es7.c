#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

int sum(struct node *list, int m) {
  if (list == NULL) {
    // Caso base: lista vuota.
    return -1;
  }

  int rest = sum(list->next, m);
  int current = 0;
  if (list->value % m == 0) {
    current = list->value;
  }

  if (rest == -1) {
    // Se la coda era vuota, evita di propagare -1 nella somma.
    return current;
  }
  return current + rest;
}

int main() {
  struct node nodes[5];
  int m;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &nodes[i].value);
    if (i < 4) {
      nodes[i].next = &nodes[i + 1];
    } else {
      nodes[i].next = NULL;
    }
  }
  scanf("%d", &m);

  printf("%d\n", sum(&nodes[0], m));
  return 0;
}
