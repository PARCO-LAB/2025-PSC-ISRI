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

int max_int(int a, int b) {
  return (a > b) ? a : b;
}

int height(struct Node *root) {
  if (root == NULL) {
    return -1;
  }
  return 1 + max_int(height(root->left), height(root->right));
}

int count_level(struct Node *root, int k) {
  if (root == NULL) {
    return 0;
  }
  if (k == 0) {
    return 1;
  }
  return count_level(root->left, k - 1) + count_level(root->right, k - 1);
}

int best_level(struct Node *root) {
  int h = height(root);
  int best = 0;
  int best_count = -1;

  for (int i = 0; i <= h; i++) {
    int c = count_level(root, i);
    if (c > best_count) {
      best_count = c;
      best = i;
    }
  }

  return best;
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  printf("%d\n", best_level(root));

  free_tree(root);
  return 0;
}
