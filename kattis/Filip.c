#include <math.h>
#include <stdint.h>
#include <stdio.h>
int reverse(int x) {
  int tempval = x;
  int reversedNumber = 0;
  int n = 0;
  while (tempval != 0) {
    int tempNum = tempval % 10;
    tempval /= 10;
    int numToAdd = (floor(tempNum));
    if (reversedNumber > INT32_MAX / 10 || reversedNumber < INT32_MIN / 10) {
      return 0;
    }
    reversedNumber *= 10;
    reversedNumber += numToAdd;
    n++;
  }

  return reversedNumber;
} // From my leetcode

int main() {
  int num1;
  int num2;
  scanf("%i %i", &num1, &num2);
  num1 = reverse(num1);
  num2 = reverse(num2);
  int result;
  if (num1 > num2) {
    result = num1;
  } else {
    result = num2;
  }
  printf("%i", result);
}
