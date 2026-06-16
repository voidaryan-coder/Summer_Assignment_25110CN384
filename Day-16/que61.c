#include <stdio.h>
void array(int arr[], int n)
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void miss_num(int arr[], int n)
{
    printf("\nThe missing numbers in the array are:\n");
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            continue;
        }
        else
        {
            temp = arr[i] + 1;
            printf("%d ", temp);
        }
    }
    if (temp == 0)
    {
        printf("None");
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    miss_num(arr, n);
}