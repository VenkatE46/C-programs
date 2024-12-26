#include <stdio.h>

int main()
{

    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d-", i);
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    int secondlargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondlargest = largest;
            largest = array[i];
        }
    }
    printf("The second largest element is: %d\n", secondlargest);
    return 0;
}
