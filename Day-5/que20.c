#include <stdio.h>
int main()
{
    int n, i = 2;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 1)
    {
        if (n % i == 0)
        {
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    printf("Largest Prime Factor = %d", i);
    return 0;
}