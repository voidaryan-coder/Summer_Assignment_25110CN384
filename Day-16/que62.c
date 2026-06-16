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
void max_freq(int arr[], int n)
{
    int freq = 0, max_freq = 0, num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > max_freq)
        {
            max_freq = freq;
            num = arr[i];
        }
        freq = 0;
    }
    printf("\nThe element with maximum frequency is %d and its frequency is %d\n", num, max_freq);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    max_freq(arr, n);
}