#include <stdio.h>

int main() {
  int x,y;
  printf("\n\nggT");
  printf("\n\nErste Zahl: ");
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
  
  printf("\nDer ggT lautet: %i\n\n",x);
  return 0;
}
