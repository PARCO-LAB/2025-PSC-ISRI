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

int is_bst_range(struct Node *root, int minv, int maxv) {
  if (root == NULL) {
    return 1;
  }

  // Ogni nodo deve rispettare il range imposto dagli antenati.
  if (root->data <= minv || root->data >= maxv) {
    return 0;
  }

  return is_bst_range(root->left, minv, root->data) &&
         is_bst_range(root->right, root->data, maxv);
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  printf("%d\n", is_bst_range(root, INT_MIN, INT_MAX));

  free_tree(root);
  return 0;
}
