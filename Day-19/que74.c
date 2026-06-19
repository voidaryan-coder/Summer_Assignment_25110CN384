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
void sub_mat(int row, int col, int a[row][col], int b[row][col])
{
    printf("\nThe difference of both matrices is:\n");
    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("Enter the dimension for both matrices: ");
    scanf("%d%d", &row, &col);
    int a[row][col];
    printf("Enter the elements of the 1st matrix:\n");
    input_array(row, col, a);
    printf("Elements of the matrix are:\n");
    print_array(row, col, a);
    int b[row][col];
    printf("Enter the elements of the 2nd matrix:\n");
    input_array(row, col, b);
    printf("Elements of the matrix are:\n");
    print_array(row, col, b);
    sub_mat(row, col, a, b);
}