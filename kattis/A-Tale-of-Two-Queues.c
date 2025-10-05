#include <stdio.h>

int main() {
  int nQueue1;
  int nQueue2;
  int sum1 = 0;
  int sum2 = 0;
  int temp;

  scanf("%i %i", &nQueue1, &nQueue2);
  for (int i = 0; i < nQueue1; i++) {
    scanf("%i", &temp);
    sum1 += temp;
  }
  for (int i = 0; i < nQueue2; i++) {
    scanf("%i", &temp);
    sum2 += temp;
  }

  if (sum1 > sum2) {
    printf("right");
  } else if (sum1 < sum2) {
    printf("left");
  } else {
    printf("either");
  }
  return 0;
}
