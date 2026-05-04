#include <stdio.h>

#define DIM 5

void aggiungi_arco(int grafo[DIM][DIM], int u, int v) {
  grafo[u][v] = 1;
  grafo[v][u] = 1;
}

int conta_archi(int grafo[DIM][DIM]) {
  int somma = 0;
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      somma += grafo[i][j];
    }
  }
  // Faccio /2 perchè non è orientato, quindi ogni arco è contato 2 volte
  return somma / 2;
}

int main() {
  int grafo[DIM][DIM] = {0};

  aggiungi_arco(grafo, 0, 1);
  aggiungi_arco(grafo, 0, 2);
  aggiungi_arco(grafo, 3, 4);

  printf("%d\n", conta_archi(grafo));
  return 0;
}
