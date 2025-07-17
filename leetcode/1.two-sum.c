// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  for (int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        *returnSize = 2;
        int *result = malloc(sizeof(int) * *returnSize);
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }

  *returnSize = 0;
  return malloc(sizeof(int) * *returnSize);
}
// @leet end
