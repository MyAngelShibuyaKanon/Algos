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
struct ListNode *createNode(int value, struct ListNode *next) {
  struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));

  node->val = value;
  node->next = next;

  return node;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  struct ListNode *head = createNode(0, NULL);
  struct ListNode *currentNode = head;
  int carry = 0;
  while (1) {
    int tempsum = currentNode->val;
    tempsum += l1->val + l2->val;
    if (tempsum >= 10) {
      carry = 1;
      tempsum -= 10;
    } else {
      carry = 0;
    }
    currentNode->val = tempsum;

    if (!l1->next && !l2->next) {
      if (carry > 0) {
        currentNode->next = createNode(carry, NULL);
      }
      break;
    }
    currentNode->next = createNode(carry, NULL);

    currentNode = currentNode->next;
    l1 = (l1->next) ? l1->next : createNode(0, NULL);
    l2 = (l2->next) ? l2->next : createNode(0, NULL);
  }
  return head;
}
// @leet end
