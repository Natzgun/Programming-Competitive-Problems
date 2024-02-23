#include <stdio.h>
#include <stdlib.h>

/* Definition for singly-linked list. */
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
  if (!list1 && !list2)
    return NULL;
  struct ListNode head;
  head.next = NULL;

  struct ListNode *merged;
  merged = &head;

  while (list1 && list2) {
    if (list2->val >= list1->val) {
      merged->next = list1;
      list1 = list1->next;
    } else {
      merged->next = list2;
      list2 = list2->next;
    }

    merged = merged->next;
  }

  if (list1)
    merged->next = list1;
  if (list2)
    merged->next = list2;

  merged = head.next;

  return merged;
}

int main() { return 0; }
