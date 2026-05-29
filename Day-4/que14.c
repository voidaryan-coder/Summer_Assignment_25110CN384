#include <stdio.h>
int main()
{
    int a = 0, b = 1, n, sum = 0;
    printf("Enter the position of term: ");
    scanf("%d", &n);
    n = n - 2;
    while (n > 0)
    {
        sum = a + b;
        a = b;
        b = sum;
        if (n != 1)
            sum = 0;
        n--;
    }
    printf("Nth Fibonacci term is: %d", sum);
}