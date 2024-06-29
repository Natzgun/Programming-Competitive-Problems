#include <math.h>
#include <stdio.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

void convert(struct ListNode *head, double *sum, double *cont) {
  if (!head)
    return;

  convert(head->next, sum, cont);

  (*cont)++;
  if (head->val != 0) {
    *sum += pow(2, *cont);
  } else
    return;
}

int getDecimalValue(struct ListNode *head) {
  double sum = 0;
  double cont = -1;
  convert(head, &sum, &cont);

  return (int)sum;
}

int main() { return 0; }
