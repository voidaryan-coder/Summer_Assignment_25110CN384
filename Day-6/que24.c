#include <stdio.h>
int main() {
  int num, p, prd = 1;
  printf("Enter a Number and its power: ");
  scanf("%d%d", &num, &p);
  for (int i = 1; i <= p; i++) {
    prd = prd * num;
  }
  printf("The value of x^n is: %d", prd);
  return 0;
}
