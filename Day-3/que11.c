#include <stdio.h>
int main()
{
    int m, n, gcd;
    printf("Enter two numbers:\n");
    scanf("%d%d", &m, &n);
    int i = 1;
    while (i <= m || i <= n)
    {
        if (m % i == 0 && n % i == 0)
        {
        gcd = i;
        }
        i++;
    }
    printf("GCD is : %d", gcd);
}