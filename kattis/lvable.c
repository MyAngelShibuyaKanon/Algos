#include <stdio.h>
int main() {
  int size;
  scanf("%i", &size);
  char str[size];
  scanf("%s", str);
  int changes = 2;
  for (int i = 0; i < size; i++) {
    if (str[i] == 'l') {
      if (i + 1 < size && str[i + 1] == 'v') {
        changes = 0;
      }
      if (changes != 0) {
        changes = 1;
      }
    }
  }
  printf("%i", changes);
}
