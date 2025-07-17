// @leet start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; };

int **threeSum(int *nums, int numsSize, int *returnSize,
               int **returnColumnSizes) {
  qsort(nums, numsSize, sizeof(int), compare);
  *returnSize = 0;
  *returnColumnSizes = (int *)malloc(sizeof(int) * numsSize * numsSize);
  int **answer = (int **)malloc(sizeof(int) * numsSize * numsSize);
  for (int i = 0; i < numsSize - 2; i++) {
    if (i == 0 || nums[i] != nums[i - 1]) {
      int j = i + 1;
      int k = numsSize - 1;
      while (j < k) {
        if (nums[i] + nums[j] + nums[k] < 0) {
          j++;
        } else if (nums[i] + nums[j] + nums[k] > 0) {
          k--;
        } else {
          int *triplet = (int *)malloc(sizeof(int) * 3);
          (*returnColumnSizes)[*returnSize] = 3;
          triplet[0] = nums[i];
          triplet[1] = nums[j];
          triplet[2] = nums[k];
          answer[(*returnSize)] = triplet;
          (*returnSize)++;
          j++;
          while (j < k && nums[j] == nums[j - 1]) {
            j++;
          }
        }
      }
    }
  }

  return answer;
}
// @leet end
