#include <stdio.h>
#include <stdlib.h>

struct entry {
  int value;
  struct entry *next;
};

struct entry *push(struct entry *s, int value) {
  struct entry *new_top = (struct entry *)malloc(sizeof(struct entry));
  if (new_top == NULL) {
    printf("Errore allocazione\n");
    exit(1);
  }

  new_top->value = value;
  new_top->next = s;
  return new_top;
}

struct entry *pop(struct entry *stack) {
  if (stack == NULL) {
    return NULL;
  }

  struct entry *next = stack->next;
  free(stack);
  return next;
}

int top(struct entry *stack) {
  if (stack == NULL) {
    return -1;
  }
  return stack->value;
}

void print_stack(struct entry *stack) {
  struct entry *current = stack;
  while (current != NULL) {
    printf("%d ", current->value);
    current = current->next;
  }
  printf("\n");
}

void free_stack(struct entry *stack) {
  while (stack != NULL) {
    stack = pop(stack);
  }
}

int main() {
  struct entry *stack = NULL;

  stack = push(stack, 10);
  stack = push(stack, 20);
  stack = push(stack, 30);

  print_stack(stack);
  printf("top: %d\n", top(stack));

  stack = pop(stack);
  print_stack(stack);

  free_stack(stack);
  return 0;
}
