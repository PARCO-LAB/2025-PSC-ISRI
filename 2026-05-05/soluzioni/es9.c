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

struct Node *insert_bst(struct Node *root, int value) {
  if (root == NULL) {
    return new_node(value);
  }
  if (value < root->data) {
    root->left = insert_bst(root->left, value);
  } else {
    root->right = insert_bst(root->right, value);
  }
  return root;
}

int contains_bst(struct Node *root, int value) {
  if (root == NULL) {
    return 0;
  }
  if (value == root->data) {
    return 1;
  }
  if (value < root->data) {
    return contains_bst(root->left, value);
  }
  return contains_bst(root->right, value);
}

void free_tree(struct Node *root) {
  if (root != NULL) {
    free_tree(root->left);
    free_tree(root->right);
    free(root);
  }
}

int main() {
  int values[] = {9, 5, 0, 7, 15, 18, 12};
  int x;
  struct Node *root = NULL;

  for (int i = 0; i < 7; i++) {
    root = insert_bst(root, values[i]);
  }

  scanf("%d", &x);
  printf("%d\n", contains_bst(root, x));

  free_tree(root);
  return 0;
}
