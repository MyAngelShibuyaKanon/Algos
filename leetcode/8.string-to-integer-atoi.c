// @leet start
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
int myAtoi(char *s) {
  int number = 0;
  bool isChanged = false;
  int sign = 1;
  for (int i = 0; i <= strlen(s); i++) {
    if (!isChanged && (s[i] != '+' || s[i] != '-')) {
      switch (s[i]) {
      case '-':
        sign *= -1;
        isChanged = true;
        continue;
      case '+':
        sign *= 1;
        isChanged = true;
        continue;
      }
    }
    int tempNum = s[i] - 48;
    if ((int)s[i] == 32 && !isChanged) {
      continue;
    } else if (tempNum > 9 || tempNum < 0) {
      break;
    } else {
      isChanged = true;
      if (number == 0 && s[i] == 0) {
        continue;
      }
      if (number != 0) {
        if (sign * (number) > INT32_MAX / 10) {
          return INT32_MAX;
        } else if (sign * (number) < INT32_MIN / 10) {
          return INT32_MIN;
        }
        number *= 10;
      }
      if (sign * (number) >= INT32_MAX - tempNum) {
        return INT32_MAX;
      } else if (sign * (number) <= INT32_MIN + tempNum) {
        return INT32_MIN;
      }
      number += tempNum;
    }
  }

  return number * sign;
}

// @leet end
