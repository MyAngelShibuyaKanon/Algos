#include <stdio.h>
int main() {
  int num = 0;
  scanf("%i", &num);
  for (int i = 1; i <= num; i++) {
    printf("%i Abracadabra\n", i);
  }
}
