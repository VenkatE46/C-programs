#include <stdio.h>
int main()
{
    int a, b, c, r;
    printf("Enter the value of a,b and c: ");
    scanf("\n%d\n%d\n%d", &a, &b, &c);
    r = a + b + c;

    if (r % 2 == 0)
    {
        printf("The sum of the given numbers is EVEN");
    }
    else
    {
        printf("The sum of the given numbers is ODD");
    }
    for (int i = 2; i * i <= r; i++)
    {
        if (r % i == 0)
        {
            printf("The sum of the given numbers is a composite number");
            break;
        }
        else
        {
            printf("The sum of the given numbers is a prime number");
        }
    }
}