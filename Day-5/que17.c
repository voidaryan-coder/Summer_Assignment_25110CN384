#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n;
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
    return 0;
}