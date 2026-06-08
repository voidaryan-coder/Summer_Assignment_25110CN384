#include <stdio.h>
int main() {
  printf("The character triangle is:\n");
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c", j + 64);
    }
    printf("\n");
  }
  return 0;
}