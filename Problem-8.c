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
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
    printf("New array=\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    // return 0;
}