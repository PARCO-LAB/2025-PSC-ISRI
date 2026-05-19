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

void aggiungi_arco_orientato(struct node_t *grafo[], int u, int v) {
  struct node_t *n = (struct node_t *)malloc(sizeof(struct node_t));
  check_malloc(n);

  n->value = v;
  n->next = grafo[u];
  grafo[u] = n;
}

void inverti_archi(struct node_t *grafo[]) {
  struct node_t *invertito[DIM] = {NULL};

  // Per ogni arco u->v creo l'arco invertito v->u.
  for (int u = 0; u < DIM; u++) {
    struct node_t *cur = grafo[u];
    while (cur != NULL) {
      struct node_t *n = (struct node_t *)malloc(sizeof(struct node_t));
      check_malloc(n);

      n->value = u;
      n->next = invertito[cur->value];
      invertito[cur->value] = n;
      cur = cur->next;
    }
  }

  for (int i = 0; i < DIM; i++) {
    struct node_t *cur = grafo[i];
    while (cur != NULL) {
      struct node_t *next = cur->next;
      free(cur);
      cur = next;
    }
    grafo[i] = invertito[i];
  }
}

void stampa_grafo(struct node_t *grafo[]) {
  for (int i = 0; i < DIM; i++) {
    struct node_t *cur = grafo[i];
    printf("%d: ", i);
    while (cur != NULL) {
      printf("%d ", cur->value);
      cur = cur->next;
    }
    printf("\n");
  }
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

  aggiungi_arco_orientato(grafo, 0, 1);
  aggiungi_arco_orientato(grafo, 0, 2);
  aggiungi_arco_orientato(grafo, 3, 1);

  inverti_archi(grafo);
  stampa_grafo(grafo);

  free_grafo(grafo);
  return 0;
}
