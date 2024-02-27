#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode *searchBST(struct TreeNode *root, int val) {
  if (!root || root->val == val)
    return root;

  if (val < root->val)
    return searchBST(root->left, val);
  else
    return searchBST(root->right, val);
  /* return (val < root->val) ? searchBST(root->left,val) :
   * searchBST(root->right, val); */
}

int main() { return 0; }
