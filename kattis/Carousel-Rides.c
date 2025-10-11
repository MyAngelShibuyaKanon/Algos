#include <stdio.h>
int main() {
  while (1) {
    int num1;
    int num2;
    scanf("%i %i", &num1, &num2);
    if (num1 == 0 && num2 == 0) {
      break;
    }
    int offer[2];
    int bestOffer[2] = {0, 1};
    for (int i = 0; i < num1; i++) {
      scanf("%i %i", &offer[0], &offer[1]);
      if (offer[0] <= num2) {
        if ((float)offer[0] / (float)offer[1] >
                (float)bestOffer[0] / (float)bestOffer[1] ||
            ((float)offer[0] / (float)offer[1] ==
                 (float)bestOffer[0] / (float)bestOffer[1] &&
             offer[0] > bestOffer[0])) {
          bestOffer[0] = offer[0];
          bestOffer[1] = offer[1];
        }
      }
    }
    if (bestOffer[0] == 0) {
      printf("No suitable tickets offered");
    } else {
      printf("Buy %i tickets for $%i\n", bestOffer[0], bestOffer[1]);
    }
  }
}
