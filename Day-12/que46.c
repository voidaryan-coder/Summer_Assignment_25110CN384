#include <stdio.h>
#include <math.h>

void armStrong(int num)
{
    int count = 0, sum = 0;

    int x = num;
    int y = num;
    while (x > 0)
    {
        count++;
        x = x / 10;
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
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    armStrong(num);
    return 0;
}