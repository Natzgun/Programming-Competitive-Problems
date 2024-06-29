#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


struct node {
  int val;
  struct node* next; 
};

typedef struct node MyLinkedList ;


int lenghtList(MyLinkedList* node) {
  int count = 0;
  while (node) {
    node = node->next;
    count++;
  }
  return count;
}

MyLinkedList* myLinkedListCreate() {
  MyLinkedList* node = malloc(sizeof(MyLinkedList)); 
  (*node).val = 0;
  (*node).next = NULL;
  return node;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
  if (index < 0 && index > lenghtList(obj))
    return -1;
  for (int i = 0; i < index; i++) {
    obj = (*obj).next;
  }

  return (*obj).val;
}

void myLinkedListAddAtHead(MyLinkedList** obj, int val) {
  MyLinkedList* newNode = malloc(sizeof(MyLinkedList));
  newNode->val = val;

  newNode->next = *obj;
  *obj = newNode;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    
}

void myLinkedListFree(MyLinkedList* obj) {
    
}

/**
 * Your MyLinkedList struct will be instantiated and called as such: 
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
