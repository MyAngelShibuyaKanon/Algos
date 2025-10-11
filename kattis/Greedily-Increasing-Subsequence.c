#include <stdio.h>
int main() {
  int perm;
  scanf("%i", &perm);
  int arr[perm];
  for (int i = 0; i < perm; i++) {
    scanf("%i", &arr[i]);
  }
  int gis[perm];
  int largestNum = 0;
  int gisSize = 0;
  for (int i = 0; i < perm; i++) {
    if (arr[i] > largestNum) {
      largestNum = arr[i];
      gis[gisSize] = largestNum;
      gisSize++;
    }
  }

  printf("%i\n", gisSize);
  for (int i = 0; i < gisSize; i++) {
    printf("%i ", gis[i]);
  }
}
