#include <stdio.h>
int main() {
  int cases;
  char chr;
  scanf("%i", &cases);
  for (int i = 0; i < cases; i++) {
    scanf("\n");
    char cmd[100000];
    int cmd_len = 0;
    while (scanf("%c", &chr) == 1 && chr != '\n') {
      cmd[cmd_len++] = chr;
    }

    int size;
    scanf("%i", &size);
    int arr[size];

    scanf(" [");
    for (int j = 0; j < size; j++) {
      if (j < size - 1)
        scanf("%d,", &arr[j]);
      else
        scanf("%d", &arr[j]);
    }
    scanf("]");
    int left = 0, right = size - 1;
    int rev = 0;
    int error = 0;

    for (int i = 0; i < cmd_len; i++) {
      if (cmd[i] == 'R') {
        rev ^= 1;
      } else if (cmd[i] == 'D') {
        if (left > right) {
          error = 1;
          break;
        }
        if (rev == 0)
          left++;
        else
          right--;
      }
    }
    if (error) {
      printf("error\n");
      continue;
    }
    printf("[");
    if (rev == 0) {
      for (int i = left; i <= right; i++) {
        printf("%d", arr[i]);
        if (i != right)
          printf(",");
      }
    } else {
      for (int i = right; i >= left; i--) {
        printf("%d", arr[i]);
        if (i != left)
          printf(",");
      }
    }
    printf("]\n");
  }
}
