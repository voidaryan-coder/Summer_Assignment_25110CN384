#include <stdio.h>
int main()
{
    int m, n, count = 0;
    printf("Enter the range:\n");
    scanf("%d%d", &m, &n);
    printf("Prime number in given range are: ");
    for (int j = m; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
        printf("%d ", j);
        }
        count=0;
    }
}