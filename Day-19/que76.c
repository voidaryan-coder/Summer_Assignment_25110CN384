#include <stdio.h>
void input_array(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void print_array(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void diagonal(int row, int col, int a[row][col])
{
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
}
int main()
{
    int row, col;
    printf("Enter the dimension of matrix: ");
    scanf("%d%d", &row, &col);
    if (row != col)
    {
        printf("\nMatrix must be square.\n");
    }
    else
    {
        int a[row][col];
        printf("Enter the elements of the matrix:\n");
        input_array(row, col, a);
        printf("Elements of the matrix are:\n");
        print_array(row, col, a);
        printf("\nSum of the diagonal of the matrix is: ");
        diagonal(row, col, a);
    }
}