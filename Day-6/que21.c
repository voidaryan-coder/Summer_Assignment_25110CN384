// Write a program to convert decimal to binary.
#include <stdio.h>
int main() {
  int num, ar[132], i = 0;
  printf("Enter a decimal number: ");
  scanf("%d", &num);
  if (num == 0) {
    printf("0");
  } else {
    while (num > 0) {
      ar[i] = num % 2;
      num = num / 2;
      i++;
    }
    printf("Binary equivalent is:");
    for (int x = i - 1; x >= 0; x--) {
      printf("%d", ar[x]);
    }
  }
}