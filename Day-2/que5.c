#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("Sum of digits is: %d", sum);
    return 0;
}