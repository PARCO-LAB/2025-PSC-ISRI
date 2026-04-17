#include <stdio.h>

struct dnode {
  int value;
  struct dnode *prev;
  struct dnode *next;
};

void print_forward(struct dnode *head) {
  struct dnode *current = head;
  while (current != NULL) {
    printf("%d ", current->value);
    current = current->next;
  }
  printf("\n");
}

void print_backward(struct dnode *tail) {
  struct dnode *current = tail;
  while (current != NULL) {
    printf("%d ", current->value);
    current = current->prev;
  }
  printf("\n");
}

int main() {
  struct dnode nodes[5];

  for (int i = 0; i < 5; i++) {
    scanf("%d", &nodes[i].value);

    // Collegamento al nodo precedente.
    if (i == 0) {
      nodes[i].prev = NULL;
    } else {
      nodes[i].prev = &nodes[i - 1];
    }

    // Collegamento al nodo successivo.
    if (i == 4) {
      nodes[i].next = NULL;
    } else {
      nodes[i].next = &nodes[i + 1];
    }
  }

  print_forward(&nodes[0]);
  print_backward(&nodes[4]);
  return 0;
}
