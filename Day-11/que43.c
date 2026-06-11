#include <stdio.h>

void checkPrime(int num) {
  int count = 0;
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      printf("Not Prime");
      count = 1;
      break;
    }
  }
  if (count == 0)
    printf("Prime");
}

int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  checkPrime(num);
}
