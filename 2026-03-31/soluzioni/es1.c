#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 10;
  float b = 3.14f;
  char c = 'z';

  int *pa = &a;
  float *pb = &b;
  char *pc = &c;

  printf("int: indirizzo=%p, valore=%i, spazio=%lu byte\n", (void*)pa, a, sizeof(a));
  printf("float: indirizzo=%p, valore=%f, spazio=%lu byte\n", (void*)pb, b, sizeof(b));
  printf("char: indirizzo=%p, valore=%c, spazio=%lu byte\n", (void*)pc, c, sizeof(c));

  printf("puntatore a int: indirizzo=%p, valore=%p, spazio=%lu byte, valore puntato=%i\n", (void*)&pa, (void*)pa, sizeof(pa), *pa);
  printf("puntatore a float: indirizzo=%p, valore=%p, spazio=%lu byte, valore puntato=%f\n", (void*)&pb, (void*)pb, sizeof(pb), *pb);
  printf("puntatore a char: indirizzo=%p, valore=%p, spazio=%lu byte, valore puntato=%c\n", (void*)&pc, (void*)pc, sizeof(pc), *pc);

  return 0;
}
