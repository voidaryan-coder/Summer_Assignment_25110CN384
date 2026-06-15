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
void rightrotation(int arr[], int n)
{
    printf("\nEnter the number of rotations: ");
    int d;
    scanf("%d", &d);
    while (d--)
    {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    printf("\nThe right rotated array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    rightrotation(arr, n);
}