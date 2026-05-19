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

int count_one_child(struct Node *root) {
  int current = 0;

  if (root == NULL) {
    return 0;
  }

  if ((root->left == NULL && root->right != NULL) ||
      (root->left != NULL && root->right == NULL)) {
    current = 1;
  }

  return current + count_one_child(root->left) + count_one_child(root->right);
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  printf("%d\n", count_one_child(root));

  free_tree(root);
  return 0;
}
