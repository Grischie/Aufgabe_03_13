#include <stdio.h>

int main() {
  int x,y;
  printf("\n\nggT");
  printf("\nErste Zahl: ");
  scanf("%i",&x);
  printf("\nZweite Zahl: ");
  scanf("%i",&y);
  
  while (x != y) {
    if (x > y) {
      x = x - y;
    } else {
      y = y - x;
    }
  }
  
  printf("\n Der ggT lautet: %i\n\n",x);
  return 0;
}
