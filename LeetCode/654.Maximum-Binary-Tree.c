#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 // Definition for a binary tree node.
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

typedef struct TreeNode TreeNode;

void printInorder (TreeNode* node){
  if (node == NULL)
    return;
  printInorder (node->left);
  printf("%d ",node->val);
  printInorder (node->right);
}

void printTree(TreeNode* root, int depth, char branchChar) {
  const int spacesPerLevel = 4;

  if (root == NULL)
    return;

  printTree(root->right, depth + 1, '/');

  for (int i = 0; i < depth * spacesPerLevel; i++)
    printf(" ");

  printf("%d\n", root->val);
  printTree(root->left, depth + 1, '\\');
}

TreeNode* buildCartesianTree(int root, int *nums, int parent[], int leftchild[], int rightchild[]) {
  if (root == -1)
    return NULL;

  TreeNode* tmp = malloc(sizeof(TreeNode));
  tmp->val = nums[root];

  tmp->left = buildCartesianTree(leftchild[root], nums, parent, leftchild, rightchild);
  tmp->right = buildCartesianTree(rightchild[root], nums, parent, leftchild, rightchild);

  return tmp;
}

TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
  int parent[numsSize], leftchild[numsSize], rightchild[numsSize];
  memset(parent, -1, sizeof(parent));
  memset(leftchild, -1, sizeof(leftchild));
  memset(rightchild, -1, sizeof(rightchild));

  int root = 0, last;

  for (int i = 1; i <= numsSize - 1; i++) {
    // Guardamos la posicion del elemento trabajado anteriormente
    last = i - 1;
    // Este es para el caso en el que se encuentra un nodo con valor mayor al nuevo nodo
    // Guarda la ultima derecha que tenia que en este caso es vacia
    rightchild[i] = -1;
    
    // Si el nuevo es mas grande que la raiz, este se convierte en una nueva raiz y
    // su hijo izquierdo sera el antinguo arbol
    while (nums[last] <= nums[i] && last != root) {
      last = parent[last];
    }

    if (nums[last] <= nums[i]) {
      parent[root] = i;
      leftchild[i] = last;
      root = i;
    // Aqui validamos si el hijo derecho del last no tenia ningun hijo derecho asociado
    } else if (rightchild[last] == -1) {
      rightchild[last] = i; 
      parent[i] = last;
      leftchild[i] = -1;
    // Con el while hemos recorrido el nuevo LAST hasta llegar a la raiz
    // por lo que llegado a ese punto LAST(raiz) ya tenia un hijo derecho y es mayor
    // que el nuevo elemento por lo que ya no cumple ninguna de las condiciones
    // anteriores.
    } else {
      parent[rightchild[last]] = i;
      leftchild[i] = rightchild[last];
      rightchild[last] = i;
      parent[i] = last;
    }
  }

  parent[root] = -1;

  return buildCartesianTree(root, nums, parent, leftchild, rightchild);
}

int main () {
  /* int inorder[] = {5, 10, 40, 30, 28}; */
  int inorder[] = {40, 50, 20, 10, 30};
  /* int inorder[] = {10, 20, 30, 40, 50}; */
  int len = sizeof(inorder)/sizeof(inorder[0]);
  TreeNode* maxBinaryTree = constructMaximumBinaryTree(inorder, len);
  printTree(maxBinaryTree, 0, ' ');
  return 0;
}
