// @leet start
int removeDuplicates(int *nums, int numsSize) {
  int currValidNum;
  int currValidIndex = 0;
  int k = 0;

  for (int i = 0; i < numsSize; i++) {
    if (currValidNum != nums[i] || ((i == 0 && nums[i] == 0))) {
      currValidNum = nums[i];
      nums[currValidIndex] = currValidNum;
      k++;
      currValidIndex++;
    }
  }

  return k;
}
// @leet end
