#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node_t {
  int value;
  struct node_t *next;
};

struct list_t {
  struct node_t *head;
};

void check_malloc(void *p) {
  if (p == NULL) {
    printf("Errore allocazione\n");
    exit(-1);
  }
}

struct list_t *new_list() {
  struct list_t *list = (struct list_t *)malloc(sizeof(struct list_t));
  check_malloc(list);
  list->head = NULL;
  return list;
}

void insert_on_head(struct list_t *list, int value) {
  struct node_t *node = (struct node_t *)malloc(sizeof(struct node_t));
  check_malloc(node);

  node->value = value;
  node->next = list->head;
  list->head = node;
}

void insert_on_tail(struct list_t *list, int value) {
  struct node_t *node = (struct node_t *)malloc(sizeof(struct node_t));
  check_malloc(node);
  node->value = value;
  node->next = NULL;

  if (list->head == NULL) {
    list->head = node;
    return;
  }

  struct node_t *current = list->head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = node;
}

bool contains(struct list_t *list, int value) {
  struct node_t *current = list->head;
  while (current != NULL) {
    if (current->value == value) {
      return true;
    }
    current = current->next;
  }
  return false;
}

void remove_from_list(struct list_t *list, int value) {
  struct node_t *current = list->head;
  struct node_t *prev = NULL;

  while (current != NULL) {
    if (current->value == value) {
      // Rimuove solo la prima occorrenza trovata.
      if (prev == NULL) {
        list->head = current->next;
      } else {
        prev->next = current->next;
      }
      free(current);
      return;
    }
    prev = current;
    current = current->next;
  }
}

void print(struct list_t *list) {
  struct node_t *current = list->head;
  while (current != NULL) {
    printf("%d ", current->value);
    current = current->next;
  }
  printf("\n");
}

void empty_list(struct list_t *list) {
  struct node_t *current = list->head;
  while (current != NULL) {
    struct node_t *next = current->next;
    free(current);
    current = next;
  }
  list->head = NULL;
}

void free_list(struct list_t *list) {
  empty_list(list);
  free(list);
}

int main() {
  struct list_t *list = new_list();

  insert_on_head(list, 10);
  insert_on_head(list, 20);
  insert_on_tail(list, 30);
  insert_on_tail(list, 20);

  print(list);
  printf("contains 30: %d\n", contains(list, 30));

  remove_from_list(list, 20);
  print(list);

  empty_list(list);
  print(list);

  free_list(list);
  return 0;
}
