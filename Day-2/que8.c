#include <stdio.h>
int main()
{
    int n, revnum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n;
    while (n > 0)
    {
        int d = n % 10;
        revnum = revnum * 10 + d;
        n = n / 10;
    }
    if (revnum == num)
    {
        printf("The given number is palindrome number");
    }
    else
    {
        printf("The given number is not palindrome number");
    }
    return 0;
}