#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = malloc(sizeof(struct node));
  (*node).data = data;
  (*node).left = NULL;
  (*node).right = NULL;

  return node;
}
struct node *insert(struct node *node, int data) {
  if (!node) {
    return newNode(data);
  } else {
    if (data <= node->data)
      node->left = insert(node->left, data);
    else
      node->right = insert(node->right, data);
    return node;
  }
}

struct node *build123() {
  struct node *myNode = NULL;
  myNode = insert(myNode, 3);
  myNode = insert(myNode, 2);
  myNode = insert(myNode, 1);
  /* myNode = insert(myNode, 3); */
  /* myNode = insert(myNode, 5); */
  /* myNode = insert(myNode, 7); */
  /* myNode = insert(myNode, 6); */
  return myNode;
}

void printTree2(struct node *root, int depth, char branchChar) {
  const int spacesPerLevel = 4;

  if (root == NULL)
    return;

  printTree2(root->right, depth + 1, '/');

  for (int i = 0; i < depth * spacesPerLevel; i++)
    printf(" ");

  printf("%d\n", root->data);
  printTree2(root->left, depth + 1, '\\');
}

/* bool checkTree(struct TreeNode *root) { */
/*   return ((root->left->val + root->right->val) == root->val); */
/* } */

void printTree(struct node *node) {
  if (!node)
    return;
  else {
    printTree(node->left);
    printf("%d ", node->data);
    printTree(node->right);
  }
}

void test() {
  struct node *root = build123();
  printTree2(root, 0, ' ');
  /* printTree(root); */
}

int main(int argc, char *argv[]) {
  test();
  return 0;
}
