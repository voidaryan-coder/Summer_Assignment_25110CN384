#include <stdio.h>

void fibo(int a, int b, int c, int term) {
  if (term == 0) {
    return;
  } else {
    a = b;
    b = c;
    c = a + b;
    printf("%d ", c);
    fibo(a, b, c, term - 1);
  }
}

int main() {
  int num, a = 0, b = 1, c;
  printf("Enter the number of terms\n");
  scanf("%d", &num);
  printf("The fibonacci series upto %d terms is:\n", num);
  c = a + b;
  printf("%d %d %d ", a, b, c);
  fibo(a, b, c, num - 3);
}