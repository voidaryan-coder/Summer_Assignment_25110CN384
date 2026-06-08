#include <stdio.h>
int main() {
  printf("The half pyramid pattern is:\n");
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}