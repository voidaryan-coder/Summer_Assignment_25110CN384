#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, count = 0, sum = 0;
    printf("Enter the range of numbers: ");
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        int x = i;
        int y = i;
        while (x != 0)
        {
            count++;
            x = x / 10;
        }
        while (y != 0)
        {
            int a = y % 10;
            sum = sum + (int)pow(a, count);
            y = y / 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
        count = 0;
        sum = 0;
    }
    return 0;
}