#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

struct node *max_list(struct node *list) {
  // Se la lista non esiste.
  if (list == NULL) {
    return NULL;
  }
  // Se c'è un solo elemento nella lista.
  if (list->next == NULL) {
    return list;
  }

  // Massimo della sottolista che parte dal nodo successivo.
  struct node *max_tail = max_list(list->next);
  // Confronta il nodo corrente col massimo trovato in coda.
  if (list->value > max_tail->value) {
    return list;
  }
  return max_tail;
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

  struct node *res = max_list(&nodes[0]);
  if (res != NULL) {
    printf("%d\n", res->value);
  }

  return 0;
}
