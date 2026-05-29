#include <stdio.h>
int main()
{
    int n, fact = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n;
    while (n > 0)
    {
        int d = n % 10;
        for (int i = 1; i <= d; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        fact = 1;
        n = n / 10;
    }
    if (num == sum)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    return 0;
}