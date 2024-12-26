#include <stdio.h>
int series(int number)
{

    if (number == 0)
    {
        return 0;
    }
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return series(number - 1) + series(number - 2);
    }
}
int main()
{
    int number;
    printf("Enter the position of number in the series:");
    scanf("%d", &number);
    int n = series(number);
    printf("The %dth term of the series is %d\n", number, n);
    return 0;
}