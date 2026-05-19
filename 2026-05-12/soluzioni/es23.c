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

struct Node *mirror_copy(struct Node *root) {
  struct Node *copy;

  if (root == NULL) {
    return NULL;
  }

  // Scambia ricorsivamente i sottoalberi per ottenere lo specchio.
  copy = new_node(root->data);
  copy->left = mirror_copy(root->right);
  copy->right = mirror_copy(root->left);

  return copy;
}

void pre_order(struct Node *root) {
  if (root != NULL) {
    printf("%d ", root->data);
    pre_order(root->left);
    pre_order(root->right);
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

  struct Node *m = mirror_copy(root);
  pre_order(m);
  printf("\n");
  free_tree(m);

  free_tree(root);
  return 0;
}
