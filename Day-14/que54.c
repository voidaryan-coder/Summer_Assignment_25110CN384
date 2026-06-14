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
void freq(int arr[], int n)
{
    printf("\nEnter the element whose frequency is to be found: ");
    int num;
    scanf("%d", &num);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("Element found in the array %d times.\n", count);
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
    freq(arr, n);
}