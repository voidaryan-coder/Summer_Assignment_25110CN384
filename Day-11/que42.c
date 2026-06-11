#include <stdio.h>

int compare(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("The maximum of %d and %d is %d", a, b, compare(a, b));
}
