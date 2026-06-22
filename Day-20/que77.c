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
void product_mat(int row1, int col1, int row2, int col2, int a[row1][col1], int b[row2][col2])
{
    printf("\nMatrix after multiplication is:\n");
    int c[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row1, col1, row2, col2;
    printf("Enter the dimension for 1st matrix: ");
    scanf("%d%d", &row1, &col1);
    int a[row1][col1];
    printf("Enter the elements of the 1st matrix:\n");
    input_array(row1, col1, a);
    printf("Elements of the matrix are:\n");
    print_array(row1, col1, a);
    printf("Enter the dimension for 2nd matrix: ");
    scanf("%d%d", &row2, &col2);
    int b[row2][col2];
    printf("Enter the elements of the 2nd matrix:\n");
    input_array(row2, col2, b);
    printf("Elements of the matrix are:\n");
    print_array(row2, col2, b);
    if (col1 == row2)
        product_mat(row1, col1, row2, col2, a, b);
    else
        printf("Column of first matrix should be equal to row of second matrix for multiplication");
}