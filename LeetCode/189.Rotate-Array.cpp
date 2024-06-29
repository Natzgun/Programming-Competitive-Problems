#include <iostream>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

struct Node {
  int data;
  Node *next;
  Node *prev;
};

void append(Node **head_ref, int data) {
  Node *new_node = new Node();
  new_node->data = data;
  new_node->next = nullptr;
  new_node->prev = nullptr;

  if (*head_ref == nullptr) {
    *head_ref = new_node;
    (*head_ref)->next = *head_ref;
    (*head_ref)->prev = *head_ref;
  } else {
    Node *last = (*head_ref)->prev;

    last->next = new_node;
    new_node->prev = last;

    new_node->next = *head_ref;
    (*head_ref)->prev = new_node;
  }
}

void rotateCircularList(Node **head) {
  if (*head != nullptr) {
    *head = (*head)->prev;
  }
}

void printCircularList(Node *head) {
  if (head == nullptr) {
    cout << "Lista circular vacía" << endl;
    return;
  }

  Node *current = head;
  do {
    cout << current->data << " <-> ";
    current = current->next;
  } while (current != head);
  cout << "..." << endl;
}

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    Node *head = nullptr;
    FOR(i, 0, nums.size()) { append(&head, nums[i]); }

    FOR(i, 0, k % nums.size()) { rotateCircularList(&head); }

    Node *tmp = head;
    int i = 0;
    do {
      nums[i++] = tmp->data;
      tmp = tmp->next;
    } while (tmp != head);
  }
};
