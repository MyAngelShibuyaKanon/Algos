// @leet start
int removeElement(int *nums, int numsSize, int val) {
  int k = numsSize;
  for (int i = 0; i < k;) {
    if (nums[i] == val) {
      while (k > i && nums[k - 1] == val) {
        k--;
      }
      if (i < k) {
        int temp = nums[i];
        nums[i] = nums[k - 1];
        nums[k - 1] = temp;

        k--;
      }
    } else {
      i++;
    }
  }
  return k;
}
// @leet end
