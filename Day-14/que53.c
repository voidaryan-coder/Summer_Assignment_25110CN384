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
void linear(int arr[], int n)
{
    printf("\nEnter the element to search: ");
    int num;
    scanf("%d", &num);
    int pos = 0, found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            pos = i + 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Element found in the array at position: %d\n", pos);
    }
    else
    {
        printf("Element not found in the array.\n");
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    linear(arr, n);
}