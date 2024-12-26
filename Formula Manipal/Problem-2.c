#include <stdio.h>

int main()
{
    int total, hours, minutes, seconds;

    printf("Enter the total number of seconds: ");
    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d seconds is = %d hours, %d minutes, and %d seconds.",
           total, hours, minutes, seconds);

    return 0;
}