// @leet start
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
int lengthOfLongestSubstring(char *s) {
  uint8_t dirAdrTable[97] = {0};
  int stringLength = strlen(s);
  int longSubLength = 0;
  int left = 0;
  for (int right = 0; right < stringLength; right++) {
    u_char r_c = s[right] - 32;
    dirAdrTable[r_c]++;

    while (dirAdrTable[r_c] > 1) {
      u_char l_c = s[left] - 32;
      dirAdrTable[l_c]--;
      left++;
    }
    if (right - left + 1 > longSubLength) {
      longSubLength = right - left + 1;
    }
  }

  return longSubLength;
}
// @leet end
