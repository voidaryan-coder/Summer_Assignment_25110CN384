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
void evod(int arr[], int n)
{
    int count_even = 0, count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("\nThe number of even elements in the array is: %d\n", count_even);
    printf("The number of odd elements in the array is: %d\n", count_odd);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    evod(arr, n);
}