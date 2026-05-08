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

int max(int a, int b) { return (a > b) ? a : b; }

int abs_int(int x) { return (x < 0) ? -x : x; }

int check_balanced_height(struct Node *root) {
  if (root == NULL) {
    return -1;
  }

  int hl = check_balanced_height(root->left);
  int hr = check_balanced_height(root->right);

  // Se un sottoalbero e' gia' sbilanciato, propaga il flag -2
  if (hl == -2 || hr == -2) {
    return -2;
  }

  if (abs_int(hl - hr) > 1) {
    return -2;
  }

  return 1 + max(hl, hr);
}

int is_balanced(struct Node *root) { return check_balanced_height(root) != -2; }

void free_tree(struct Node *root) {
  if (root != NULL) {
    free_tree(root->left);
    free_tree(root->right);
    free(root);
  }
}

int main() {
  int values[] = {9, 5, 0, 7, 15, 18, 12};
  struct Node *root = NULL;

  for (int i = 0; i < 7; i++) {
    root = insert_bst(root, values[i]);
  }

  printf("%d\n", is_balanced(root));
  free_tree(root);
  return 0;
}
