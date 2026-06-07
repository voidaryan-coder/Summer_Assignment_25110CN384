#include <stdio.h>

int reverse(int n, int rem) {
  if (n <= 0)
    return rem;
  else {
    return reverse(n / 10, rem * 10 + (n % 10));
  }
}

int main() {
  int num, rem = 0;
  printf("Enter the number\n");
  scanf("%d", &num);
  printf("The reverse of %d is = %d\n", num, reverse(num, rem));
}