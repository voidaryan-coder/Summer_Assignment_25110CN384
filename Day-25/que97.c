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
void mergeArrays(int a[], int n, int b[], int m, int result[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while (i < n)
        result[k++] = a[i++];

    while (j < m)
        result[k++] = b[j++];
}
int main()
{
    int n1, n2;
    printf("Enter the dimension for 1st array: ");
    scanf("%d", &n1);
    printf("Enter the dimension for 2nd array: ");
    scanf("%d", &n2);
    int a[n1];
    printf("\nEnter the elements of the 1st array:\n");
    input_array(a, n1);
    printf("Elements of the 1st array are:\n");
    print_array(a, n1);
    int b[n2];
    printf("\nEnter the elements of the 2nd array:\n");
    input_array(b, n2);
    printf("Elements of the 2nd array are:\n");
    print_array(b, n2);
    bubblesort(a, n1);
    bubblesort(b, n2);
    int result[n1 + n2];
    mergeArrays(a, n1, b, n2, result);
    printf("\nThe merged array is :\n");
    print_array(result, n1 + n2);
}