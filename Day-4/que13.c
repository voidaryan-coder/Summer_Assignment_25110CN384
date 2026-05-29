#include <stdio.h>
int main()
{
    int a = 0, b = 1, n, sum = 0;
    printf("Enter the last limit: ");
    scanf("%d", &n);
    printf("The fibonacci series is: %d %d ", a, b);
    n = n - 2;
    while (n > 0)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
        sum = 0;
        n--;
    }
}