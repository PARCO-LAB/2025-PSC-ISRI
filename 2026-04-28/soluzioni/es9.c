#include <stdio.h>
#include <stdlib.h>

#define DIM 5

struct node_t {
  int value;
  struct node_t *next;
};

void check_malloc(void *p) {
  if (p == NULL) {
    printf("Errore allocazione\n");
    exit(1);
  }
}

void aggiungi_arco(struct node_t *grafo[], int u, int v) {
  struct node_t *n1 = (struct node_t *)malloc(sizeof(struct node_t));
  struct node_t *n2 = (struct node_t *)malloc(sizeof(struct node_t));
  check_malloc(n1);
  check_malloc(n2);

  n1->value = v;
  n1->next = grafo[u];
  grafo[u] = n1;

  n2->value = u;
  n2->next = grafo[v];
  grafo[v] = n2;
}

int adiacenti(struct node_t *grafo[], int u, int v) {
  // Controllo se v è un vicino di u
  struct node_t *cur = grafo[u];
  while (cur != NULL) {
    if (cur->value == v) {
      // L'arco esiste
      return 1;
    }
    cur = cur->next;
  }
  // Non è un vicino
  return 0;
}

void free_grafo(struct node_t *grafo[]) {
  for (int i = 0; i < DIM; i++) {
    struct node_t *cur = grafo[i];
    while (cur != NULL) {
      struct node_t *next = cur->next;
      free(cur);
      cur = next;
    }
  }
}

int main() {
  struct node_t *grafo[DIM] = {NULL};
  int u, v;

  aggiungi_arco(grafo, 0, 1);
  aggiungi_arco(grafo, 2, 3);

  scanf("%d %d", &u, &v);
  printf("%d\n", adiacenti(grafo, u, v));

  free_grafo(grafo);
  return 0;
}
