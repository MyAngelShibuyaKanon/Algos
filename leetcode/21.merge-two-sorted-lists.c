#include <stdlib.h>
struct ListNode {
  int val;
  struct ListNode *next;
};
// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *createEmptyNode() {
  struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
  return node;
}
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
  struct ListNode *tail = createEmptyNode();
  struct ListNode *head = tail;
  while (list1 || list2) {
    if (!list2 || (list1 && list1->val < list2->val)) {
      tail->next = list1;
      list1 = list1->next;
    } else if (!list1 || (list2 && list2->val <= list1->val)) {
      tail->next = list2;
      list2 = list2->next;
    }
    tail = tail->next;
  }
  return head->next;
}
// @leet end
