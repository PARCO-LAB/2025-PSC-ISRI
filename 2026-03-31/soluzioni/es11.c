#include <stdio.h>

struct time {
  int ore;
  int minuti;
  int secondi;
};

void split_time(int tot_sec, struct time *t) {
  t->ore = tot_sec / 3600;
  tot_sec %= 3600;
  t->minuti = tot_sec / 60;
  t->secondi = tot_sec % 60;
}

int main() {
  int sec;
  struct time orario;
  
  printf("Inserisci i secondi dalla mezzanotte: ");
  if (scanf("%d", &sec) == 1) {
    split_time(sec, &orario);
    printf("Orario: %02d:%02d:%02d\n", orario.ore, orario.minuti, orario.secondi);
  } else {
    printf("Input non valido\n");
  }
  return 0;
}
