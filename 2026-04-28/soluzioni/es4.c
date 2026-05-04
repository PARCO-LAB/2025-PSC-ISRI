#include <stdio.h>

#define DIM 5

void aggiungi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 1;
  grafo[v][u] = 1;
}

void stampa_gradi(int grafo[DIM][DIM]) {
  for (int i = 0; i < DIM; i++) {
    int grado = 0;
    for (int j = 0; j < DIM; j++) {
      grado += grafo[i][j];
    }
    printf("Nodo %d: %d\n", i, grado);
  }
}

int main() {
  int grafo[DIM][DIM] = {0};
  aggiungi_arco(grafo, 0, 1);
  aggiungi_arco(grafo, 0, 2);
  aggiungi_arco(grafo, 2, 3);

  stampa_gradi(grafo);
  return 0;
}
