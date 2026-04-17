#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

struct node *min_even(struct node *list) {
  if (list == NULL) {
    return NULL;
  }

  // Miglior candidato trovato nella parte restante della lista.
  struct node *best_tail = min_even(list->next);
  if (list->value % 2 == 0) {
    // Se il nodo corrente e' pari, aggiorna il minimo quando conviene.
    if (best_tail == NULL || list->value < best_tail->value) {
      return list;
    }
  }
  return best_tail;
}

int main() {
  struct node nodes[5];
  struct node *res;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &nodes[i].value);
    if (i < 4) {
      nodes[i].next = &nodes[i + 1];
    } else {
      nodes[i].next = NULL;
    }
  }

  res = min_even(&nodes[0]);
  if (res != NULL) {
    printf("%d\n", res->value);
  } else {
    printf("NULL\n");
  }

  return 0;
}
