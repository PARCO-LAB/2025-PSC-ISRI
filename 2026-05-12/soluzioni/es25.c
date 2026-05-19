#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *new_node(int value) {
  struct Node *n = (struct Node *)malloc(sizeof(struct Node));
  if (n == NULL) {
    exit(1);
  }
  n->data = value;
  n->left = NULL;
  n->right = NULL;
  return n;
}

void free_tree(struct Node *root) {
  if (root != NULL) {
    free_tree(root->left);
    free_tree(root->right);
    free(root);
  }
}

struct LNode {
  int value;
  struct LNode *next;
};

void append_sorted(struct LNode **head, int value) {
  struct LNode *node;
  struct LNode *cur;

  node = (struct LNode *)malloc(sizeof(struct LNode));
  if (node == NULL) {
    exit(1);
  }
  node->value = value;
  node->next = NULL;

  if (*head == NULL || value <= (*head)->value) {
    node->next = *head;
    *head = node;
    return;
  }

  cur = *head;
  while (cur->next != NULL && cur->next->value < value) {
    cur = cur->next;
  }

  node->next = cur->next;
  cur->next = node;
}

void tree_to_list(struct Node *root, struct LNode **head) {
  if (root == NULL) {
    return;
  }

  append_sorted(head, root->data);
  tree_to_list(root->left, head);
  tree_to_list(root->right, head);
}

void print_list(struct LNode *head) {
  while (head != NULL) {
    printf("%d ", head->value);
    head = head->next;
  }
  printf("\n");
}

void free_list(struct LNode *head) {
  while (head != NULL) {
    struct LNode *next = head->next;
    free(head);
    head = next;
  }
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  struct LNode *head = NULL;
  tree_to_list(root, &head);
  print_list(head);
  free_list(head);

  free_tree(root);
  return 0;
}
