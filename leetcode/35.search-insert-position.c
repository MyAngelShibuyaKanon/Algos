#include <stdbool.h>
// @leet start
int searchInsert(int *nums, int numsSize, int target) {
  int m;
  int h = numsSize - 1;
  int l = 0;

  while (l <= h) {
    m = l + (h - l) / 2;
    if (nums[m] == target) {
      return m;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      h = m - 1;
    }
  }
  if (l > h) {
    return l;
  }
  return m;
}

// @leet end
