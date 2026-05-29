#include <stdio.h>
int main()
{
    int n, prd = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int d = n % 10;
        prd = prd * d;
        n = n / 10;
    }
    printf("Product of digits is: %d", prd);
    return 0;
}