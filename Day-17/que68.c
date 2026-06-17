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
void common(int a[], int n1, int b[], int n2)
{
    printf("\nThe common elements of the two arrays are:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
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
    common(a, n1, b, n2);
}