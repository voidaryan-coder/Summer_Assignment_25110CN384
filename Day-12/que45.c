#include <stdio.h>

int palindrome(int rem, int num) {
  if (num <= 0)
    return rem;
  else
    return palindrome(rem * 10 + (num % 10), num / 10);
}

int main() {
  int num, rem = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  rem = palindrome(rem, num);
  if (rem == num)
    printf("Palindrome");
  else
    printf("Not a palindrome");
}
