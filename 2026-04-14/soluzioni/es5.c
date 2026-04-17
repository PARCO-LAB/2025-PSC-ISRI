#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

void reverse_print(struct node *list) {
  if (list == NULL) {
    return;
  }
  // Prima visita la coda, poi stampa: output in ordine inverso.
  reverse_print(list->next);
  printf("%d ", list->value);
}

int main() {
  struct node nodes[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &nodes[i].value);
    if (i < 4) {
      nodes[i].next = &nodes[i + 1];
    } else {
      nodes[i].next = NULL;
    }
  }

  reverse_print(&nodes[0]);
  printf("\n");
  return 0;
}
