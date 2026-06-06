#include <math.h>
#include <stdio.h>
int main() {
  int num, rem, sum = 0, c = 0;
  printf("Enter a binary number:");
  scanf("%d", &num);
  int x = num;
  while (x > 0) {
    c++;
    x = x / 10;
  }
  for (int i = 0; i < c; i++) {
    rem = num % 10;
    sum = sum + rem * pow(2, i);
    num = num / 10;
  }
  printf("Decimal equivalent is: %d", sum);
}