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
void seclarge(int arr[], int n)
{
    int large = arr[0];
    int seclarge = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            seclarge = large;
            large = arr[i];
        }
        else if (arr[i] > seclarge && arr[i] != large)
        {
            seclarge = arr[i];
        }
    }
    printf("\nThe second largest element in the array is: %d\n", seclarge);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    seclarge(arr, n);
}