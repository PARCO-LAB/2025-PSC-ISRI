#include <stdio.h>

#define DIM 5

void aggiungi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 1;
  grafo[v][u] = 1;
}

void stampa_grafo(int grafo[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      printf("%d ", grafo[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int grafo[DIM][DIM] = {0};

  aggiungi_arco(grafo, 0, 1);
  aggiungi_arco(grafo, 0, 2);
  aggiungi_arco(grafo, 3, 4);

  stampa_grafo(grafo);
  return 0;
}
