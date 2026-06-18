#include <stdio.h>
void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}
int binary(int arr[], int n, int tar)
{
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (tar > arr[mid])
            low = mid + 1;
        else if (tar < arr[mid])
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int n, tar;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    input_array(arr, n);
    printf("The sorted array is:\n");
    bubblesort(arr, n);
    print_array(arr, n);
    printf("\nEnter the element to be searched: ");
    scanf("%d", &tar);
    int result = binary(arr, n, tar);
    if (result != -1)
    {
        printf("The element %d is found at position: %d", tar, result + 1);
    }
    else
    {
        printf("Search Failed...");
    }
}