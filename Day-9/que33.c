#include <stdio.h>
int main() {
  printf("The reverse star pattern is:\n");
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}