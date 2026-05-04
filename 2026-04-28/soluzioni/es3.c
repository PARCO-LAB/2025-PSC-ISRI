#include <stdio.h>

#define DIM 5

void aggiungi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 1;
  grafo[v][u] = 1;
}

int adiacenti(int grafo[DIM][DIM], int u, int v) {
  return grafo[u][v];
}

int main() {
  int grafo[DIM][DIM] = {0};
  int u, v;

  aggiungi_arco(grafo, 0, 1);
  aggiungi_arco(grafo, 2, 3);

  scanf("%d %d", &u, &v);
  printf("%d\n", adiacenti(grafo, u, v));
  return 0;
}
