// @leet start
#include <math.h>
#include <stdint.h>
int reverse(int32_t x) {
  int32_t tempval = x;
  int32_t reversedNumber = 0;
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
}
// @leet end
