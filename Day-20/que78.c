#include <stdio.h>
int main()
{
    int n;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int symmetric = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}