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

int depth_k(struct Node *root, int k, int depth) {
  int left_depth;

  if (root == NULL) {
    return -1;
  }

  if (root->data == k) {
    return depth;
  }

  left_depth = depth_k(root->left, k, depth + 1);
  if (left_depth != -1) {
    return left_depth;
  }

  return depth_k(root->right, k, depth + 1);
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  int k;
  scanf("%d", &k);
  printf("%d\n", depth_k(root, k, 0));

  free_tree(root);
  return 0;
}
