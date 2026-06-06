#include <stdio.h>
int main() {
  int num, count = 0;
  printf("Enter a Decimal Number: ");
  scanf("%d", &num);
  while (num != 0) {
    if (num % 2 == 1) {
      count++;
    }
    num /= 2;
  }
  printf("The set bits of the given number is: %d", count);
  return 0;
}