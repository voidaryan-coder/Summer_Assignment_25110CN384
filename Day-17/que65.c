#include <stdio.h>
void array(int arr[], int n)
{
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
void merge(int a[], int n1, int b[], int n2)
{
    int c[n1 + n2];
    for (int i = 0; i < n1+n2; i++)
    {
        if(i < n1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - n1];
        }
    }
    printf("\nThe merged array is:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
}
int main()
{
    int n1, n2;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int a[n1], b[n2];
    printf("Enter the elements of first array:\n");
    array(a, n1);
    printf("\nEnter the elements of second array:\n");
    array(b, n2);
    merge(a, n1, b, n2);
}