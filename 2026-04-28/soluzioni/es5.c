#include <stdio.h>

#define DIM 5

void aggiungi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 1;
  grafo[v][u] = 1;
}

void rimuovi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 0;
  grafo[v][u] = 0;
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
  aggiungi_arco(grafo, 1, 2);
  aggiungi_arco(grafo, 2, 3);
  rimuovi_arco(grafo, 1, 2);

  stampa_grafo(grafo);
  return 0;
}
