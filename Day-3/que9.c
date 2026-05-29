#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
        count++;
        }
    }
    if (count == 2)
    {
    printf("It is a prime number");
    }
    else
    {
    printf("It is a not prime number");
    }
}
