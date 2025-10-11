#include <stdio.h>
int main() {
  int table[26] = {0};
  int size;
  scanf("%i", &size);
  char str1[size + 1];
  char str2[size + 1];
  scanf("%s %s", str1, str2);
  int perfMatch = 0;
  int similar = 0;
  for (int i = 0; i < size; i++) {
    table[str1[i] - 'A']++;
    if (str1[i] == str2[i]) {
      perfMatch++;
      table[str1[i] - 'A']--;
      str2[i] = '*';
    }
  }
  for (int i = 0; i < size; i++) {
    if (str2[i] != '*') {
      if (table[str2[i] - 'A'] > 0) {
        similar++;
        table[str2[i] - 'A']--;
      }
    }
  }
  printf("%i %i", perfMatch, similar);
}
