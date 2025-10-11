#include <stdio.h>
int main() {
  char chr;
  int uncertainty = 0;
  while (scanf("%c", &chr) == 1 && chr != '\n' && chr == 'u') {
    uncertainty++;
  }
  printf("%i", uncertainty);
}
