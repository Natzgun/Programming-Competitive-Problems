#include <cstring>
#include <iostream>

using namespace std;


 // Definition for a binary tree node.
struct TreeNode {
  int data;
  struct TreeNode *left;
  struct TreeNode *right;
};


struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
  int parent[numsSize], leftchild[numsSize], rightchild[numsSize];
  memset(parent, -1, sizeof(parent));
  memset(leftchild, -1, sizeof(leftchild));
  memset(rightchild, -1, sizeof(rightchild));

  int root{0}, last;

  for (int i = 1; i <= numsSize - 1; i++) {
    // Guardamos la posicion del elemento trabajado anteriormente
    last -= 1;
    // Este es para el caso en el que se encuentra un nodo con valor mayor al nuevo nodo
    // Guarda la ultima derecha que tenia que en este caso es vacia
    rightchild[i] = -1;

    if (nums[last] < nums[i]) {
      parent[root] = i;
      leftchild[i] = last;
      root++;
    } else if (nums[last] > nums[i]) {
      rightchild[last] = i; 
    }
  }
}

int main () {
  int inorder[] = {3,2,1,6,0,5};
  int len = sizeof(inorder)/sizeof(inorder[0]);
  cout << len << endl;
  return 0;
}
