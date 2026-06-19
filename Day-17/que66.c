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
void union_array(int a[], int n1, int b[], int n2)
{
    int unionArr[n1 + n2], found, k = 0, i, j;
    for (i = 0; i < n1; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (a[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            unionArr[k++] = a[i];
    }
    for (i = 0; i < n2; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (b[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            unionArr[k++] = b[i];
    }

    printf("\nUnion of arrays: ");
    for (i = 0; i < k; i++)
        printf("%d ", unionArr[i]);
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
    union_array(a, n1, b, n2);
}