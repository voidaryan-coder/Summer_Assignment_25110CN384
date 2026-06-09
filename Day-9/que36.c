#include <stdio.h>
int main() {
  printf("The hollow square is:\n");
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      if (j == 1 || j == 5 || i == 1 || i == 5) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}