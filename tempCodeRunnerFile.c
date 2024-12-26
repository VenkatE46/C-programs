#include <stdio.h>
int series(int number)
{
    printf("Enter the position of number in the series:");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Please enter a non-negative number!");
    }
    else
    {
        return series(number - 1) + series(number + 2);
    }
}
int main()
{
    int number;
    int n = series(number);
    printf("the %dth term of the seriesis:%d\n", number, n);
    return 0;
}