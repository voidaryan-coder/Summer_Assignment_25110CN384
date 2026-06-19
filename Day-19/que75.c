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
void transpose(int row, int col, int a[row][col])
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("Enter the dimension of matrix: ");
    scanf("%d%d", &row, &col);
    int a[row][col];
    printf("Enter the elements of the matrix:\n");
    input_array(row, col, a);
    printf("Elements of the matrix are:\n");
    print_array(row, col, a);
    printf("\nTranspose of the matrix is: \n");
    transpose(row, col, a);
}