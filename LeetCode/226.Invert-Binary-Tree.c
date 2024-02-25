#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

// First version
struct TreeNode *invertTree(struct TreeNode *root) {
  if (!root)
    return NULL;

  struct TreeNode *tmp = NULL;
  tmp = root->left;
  root->left = root->right;
  root->right = tmp;
  invertTree(root->left);
  invertTree(root->right);

  return root;
}

// Second Version dumy

struct TreeNode *invertTree2(struct TreeNode *root) {
  if (!root)
    return NULL;

  struct TreeNode *left, *right = NULL;

  left = invertTree2(root->left);
  right = invertTree2(root->right);

  root->left = right;
  root->right = left;
  return root;
}

int main() { return 0; }
