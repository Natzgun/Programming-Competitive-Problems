#include <stdio.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

void transversal(struct TreeNode *root, int *sum, int low, int high) {
  if (!root)
    return;

  transversal(root->left, sum, low, high);
  if (root->val >= low && root->val <= high)
    *sum = *sum + root->val;
  transversal(root->right, sum, low, high);
}

int rangeSumBST(struct TreeNode *root, int low, int high) {
  int sum = 0;
  transversal(root, &sum, low, high);
  return sum;
}

void sumTest(int *sum) { *sum = 20; }

void test() {
  int sum = 0;
  sumTest(&sum);
  printf("%d", sum);
}

int main() {
  test();
  return 0;
}
