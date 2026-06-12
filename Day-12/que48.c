#include <stdio.h>

void perfectNumber(int n)
{
    int num = n, i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf(" %d is a perfect number", num);
    }
    else
    {
        printf(" %d is not a perfect number", num);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    perfectNumber(n);
    return 0;
}