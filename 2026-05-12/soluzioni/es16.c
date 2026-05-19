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

int equal_tree(struct Node *a, struct Node *b) {
  if (a == NULL && b == NULL) {
    return 1;
  }
  if (a == NULL || b == NULL) {
    return 0;
  }
  if (a->data != b->data) {
    return 0;
  }

  return equal_tree(a->left, b->left) && equal_tree(a->right, b->right);
}

int main() {
  struct Node *a = new_node(9);
  struct Node *b = new_node(9);

  a->left = new_node(5);
  a->right = new_node(15);
  a->left->left = new_node(0);
  a->left->right = new_node(7);
  a->right->left = new_node(12);
  a->right->right = new_node(18);

  b->left = new_node(5);
  b->right = new_node(15);
  b->left->left = new_node(0);
  b->left->right = new_node(7);
  b->right->left = new_node(12);
  b->right->right = new_node(18);

  printf("%d\n", equal_tree(a, b));

  free_tree(a);
  free_tree(b);
  return 0;
}
