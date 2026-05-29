#include<stdio.h>
#include<math.h>
int main()
{
    int num, count = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int x = num;
    int y = num;
    while (x > 0)
    {
        count++;
        x=x/10;
    }
    while (y > 0)
    {
        int a = y % 10;
        sum = sum + pow(a, count);
        y = y / 10;
    }
    if (num == sum)
    {
        printf("Given number is an armstrong number");
    }
    else
    {
        printf("Given number is not an armstrong number");
    }
    return 0;
}