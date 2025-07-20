#include <stdbool.h>
#include <stdlib.h>
// @leet start
struct node {
  char val;
  struct node *next;
};
struct node *newNode(char val, struct node *next) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->val = val;
  node->next = next;

  return node;
};
void push(char val, struct node **head) { *head = newNode(val, *head); }
void pop(struct node **head) {
  struct node *tempHead = *head;
  if (tempHead == NULL) {
    return;
  } else {
    *head = tempHead->next;
    free(tempHead);
  }
}
bool isValid(char *s) {
  bool shouldBreak = false;
  struct node *head = NULL;
  for (; *s; ++s) {
    if (*s == '(' || *s == '{' || *s == '[') {
      push(*s, &head);
    } else if (*s == ')' || *s == '}' || *s == ']') {
      if (head == NULL) {
        shouldBreak = true;
        break;
      }
      switch (*s) {
      case ')':
        if (head->val == '(') {
          pop(&head);
        } else {
          shouldBreak = true;
        }
        break;
      case '}':
        if (head->val == '{') {
          pop(&head);
        } else {
          shouldBreak = true;
        }
        break;
      case ']':
        if (head->val == '[') {
          pop(&head);
        } else {
          shouldBreak = true;
        }
        break;
      }
    }
    {
    }

    if (shouldBreak) {
      break;
    }
  }
  return !shouldBreak && (head == NULL);
}
// @leet end
