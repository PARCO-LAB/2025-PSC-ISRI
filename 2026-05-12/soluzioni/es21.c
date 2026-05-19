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

void sum_degree_and_nodes(struct Node *root, int *sum, int *count) {
  int degree = 0;

  if (root == NULL) {
    return;
  }

  if (root->left != NULL) {
    degree++;
  }
  if (root->right != NULL) {
    degree++;
  }

  *sum += degree;
  (*count)++;

  sum_degree_and_nodes(root->left, sum, count);
  sum_degree_and_nodes(root->right, sum, count);
}

int main() {
  struct Node *root = new_node(9);
  root->left = new_node(5);
  root->right = new_node(15);
  root->left->left = new_node(0);
  root->left->right = new_node(7);
  root->right->left = new_node(12);
  root->right->right = new_node(18);

  int sum = 0;
  int count = 0;
  sum_degree_and_nodes(root, &sum, &count);
  if (count == 0) {
    printf("0.00\n");
  } else {
    printf("%.2f\n", (float)sum / count);
  }

  free_tree(root);
  return 0;
}
