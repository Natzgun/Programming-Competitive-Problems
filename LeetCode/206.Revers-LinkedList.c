#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct ListNode* reverseList(struct ListNode* head) {
  struct ListNode* tmp = head;
  while (tmp) {
    tmp = tmp->next;
  }
}
