#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

bool checkTree(struct TreeNode *root) {
  return ((root->left->val + root->right->val) == root->val);
}

int main(int argc, char *argv[]) { return 0; }
