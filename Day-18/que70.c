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
void selectionsort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int sm_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[sm_idx])
            {
                sm_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[sm_idx];
        arr[sm_idx] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    input_array(arr, n);
    printf("Elements of the array are:\n");
    print_array(arr, n);
    printf("\nThe sorted array is:\n");
    selectionsort(arr, n);
    print_array(arr, n);
}