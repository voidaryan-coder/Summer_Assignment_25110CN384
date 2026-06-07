#include <stdio.h>

int sumOfdigits(int n) {
  if (n <= 0)
    return 0;
  else
    return (n % 10) + sumOfdigits(n / 10);
}

int main() {
  int num;
  printf("Enter the number\n");
  scanf("%d", &num);
  printf("The sum of digits of %d is: %d\n", num, sumOfdigits(num));
}