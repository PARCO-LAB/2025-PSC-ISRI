#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

void insert_sorted(struct node **head, struct node *new_node) {
  // Inserimento in testa se lista vuota o se il nuovo valore e' il piu'
  // piccolo.
  if (*head == NULL || new_node->value <= (*head)->value) {
    new_node->next = *head;
    *head = new_node;
    return;
  }

  struct node *current = *head;
  // Avanza fino al nodo subito precedente alla posizione corretta.
  while (current->next != NULL && current->next->value < new_node->value) {
    current = current->next;
  }
  new_node->next = current->next;
  current->next = new_node;
}

void print_list(struct node *list) {
  while (list != NULL) {
    printf("%d ", list->value);
    list = list->next;
  }
  printf("\n");
}

int main() {
  struct node nodes[5];
  struct node *head = NULL;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &nodes[i].value);
    nodes[i].next = NULL;
    insert_sorted(&head, &nodes[i]);
  }

  print_list(head);
  return 0;
}
