#include <stdio.h>
int main() {

  printf("The character pyramid is:\n");
  for (int i = 1; i <= 5; i++) {
    int k = i;
    for (int sp = 4; sp >= i; sp--) {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      if (j <= i) {
        printf("%c", j + 64);
      } else if (j >= i) {
        k = k - 1;
        printf("%c", k + 64);
      }
    }
    printf("\n");
  }
}